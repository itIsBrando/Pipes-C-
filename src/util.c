#include "main.h"
#include "array.h"
#include "util.h"
#include "images/colors.h"

#define SAVE_NAME "PIPESAVE"
#define CURRENT_SAVE_VERSION 1

static ti_var_t saveSlot;
static save_t save;


void loadData() {
    ti_var_t file;
    ti_CloseAll();

 
    if(ti_Open(SAVE_NAME, "r"))
    {
        file = ti_Open(SAVE_NAME, "r+");
        memcpy(&save, ti_GetDataPtr(file), sizeof(save_t));
        if(save.version != CURRENT_SAVE_VERSION)
        {
            gfx_PrintStringXY("Save version depreciated.", 0, 0);
            gfx_PrintStringXY("Attempting to upgrade save.", 0, 8);
            upgradeSave();
        }
    } else {
        file = ti_Open(SAVE_NAME, "w+");
        ti_Resize(sizeof(save_t), file);
    }

    saveSlot = file;
}


void saveData() {
    const void *pointer = ti_GetDataPtr(saveSlot);

    memcpy(pointer, &save, sizeof(save_t));
}


void upgradeSaveFail() {
    gfx_SetTextFGColor(COLOR_RED);
    gfx_PrintStringXY("Save couldn't be upgraded.", 0, 16);
    gfx_PrintStringXY("Delete "SAVE_NAME" appvar. Report version:", 0, 24);
    gfx_PrintUInt(save.version, 2);

    while(!os_GetCSC());
    gfx_End();
    exit(0);
}


void upgradeSave() {
    ti_var_t file;
    unsigned int oldSaveSize;
    uint8_t oldVersion;
    void *pointer;

    ti_CloseAll();
    file = ti_Open(SAVE_NAME, "r+");
    pointer = ti_GetDataPtr(file);
    oldSaveSize = ti_GetSize(file);

    // copy old data into the save struct
    memcpy(&save, pointer, oldSaveSize);

    // change size to fit new struct size
    ti_Resize(sizeof(save_t), file);

    oldVersion = save.version;
    save.version = CURRENT_SAVE_VERSION;

    // all handable save versions
    switch(oldVersion)
    {
        case 0:
            memcpy(pointer, &save, oldSaveSize);
            break;
        default:
            upgradeSaveFail();

    }
    // change version

    gfx_PrintStringXY("Save upgraded to newest version: ", 0, 16);
    gfx_PrintUInt(CURRENT_SAVE_VERSION, 2);

    while(!os_GetCSC());
}

void setLevelCompletion(uint8_t level) {
    save.completed[level] = true;    
}


bool getLevelCompletion(uint8_t level) {
    return save.completed[level];
}


/* Fully compatibilty with normal RLE compression.
 * However, data should be optimized.
 * Any single-run data byte should have its highest bit set and data byte omitted
 * @param *data source of data
 * @param **dest memory location of a pointer to uint8_t
 * @param size number of bytes of *data
 * @returns void */
void rleDecompress(uint8_t *data, uint8_t **dest, size_t size) {
    uint8_t j;
    uint24_t i, out = 0;

    for(i = 0; i <= size; i++)
    {
        const uint8_t count = data[i];

        // if bit 7 is set, then this is a data byte and needs masking
        if(count & 0x80)
        {
            (*dest)[out++] = count & 0x7F;
        } else
        {
            // if we have a size, copy data to our buffer
            memset((*dest + out), data[i + 1], count);
            out += count;
            i++; // skip over the data byte
        }
        
    }

}