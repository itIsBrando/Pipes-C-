#ifndef LEVELS_H
#define LEVELS_H

#include <stdio.h>

// RLE = 14 bytes. 25% reduction. (originally uncompressable)
const uint8_t lvl1[] = {
	6, 1, 132, 2, 1, 138, 3, 0, 130, 133, 2, 1, 133, 4, 0, 133, 2, 1, 128, 133, 2, 0, 133, 128, 2, 1, 133, 128, 136, 2, 0, 133, 2, 1, 131, 136, 128, 2, 8, 137, 9, 1
};

// RLE = 22 bytes. 48% reduction.
const uint8_t lvl2[] = {
	9, 1, 6, 0, 2, 1, 5, 0, 130, 2, 1, 138, 3, 0, 2, 8, 140, 129, 128, 3, 8, 2, 0, 8, 1
};

// RLE = 15 bytes. 40% reduction.
const uint8_t lvl3[] = {
	9, 1, 2, 0, 138, 2, 0, 130, 2, 1, 4, 0, 133, 138, 129, 141, 2, 8, 143, 2, 8, 137, 8, 1
};

// RLE = 29 bytes. 36% reduction.
const uint8_t lvl4[] = {
	129, 132, 7, 1, 133, 130, 4, 0, 2, 1, 133, 5, 0, 2, 1, 133, 5, 0, 2, 1, 133, 7, 1, 133, 3, 0, 138, 128, 2, 1, 133, 2, 0, 2, 5, 128, 2, 1, 133, 5, 0, 2, 1, 131, 3, 8, 137, 128, 8, 1        
};

// RLE = 13 bytes. 28% reduction. (originally uncompressable)
const uint8_t lvl5[] = {/* 
	1,  1,  4,  1,  1,  1,  1,
	1,  3,  5,  0,  0,  0,  1,
	1,  1,  1,  8,  0,  0,  1,
	1,  6,  9,  5,  0,  0,  1,
	1,  3,  7,  0,  0,  0,  1,
	1,  0, 10,  0,  0,  2,  1,
	1,  1,  1,  1,  1,  1,  1, */
	2, 1, 132, 5, 1, 131, 133, 3, 0, 4, 1, 136, 2, 0, 2, 1, 134, 137, 133, 2, 0, 2, 1, 131, 135, 3, 0, 2, 1, 128, 138, 2, 0, 130, 8, 1
};

// RLE = 34 bytes. 44% reduction
const uint8_t lvl6[] = {
	129, 132, 9, 1, 133, 2, 0, 130, 4, 0, 2, 1, 133, 6, 1, 143, 2, 1, 131, 3, 8, 144, 3, 0, 2, 1, 4, 0, 131, 3, 0, 2, 1, 133, 135, 6, 0, 2, 1, 138, 137, 6, 0, 10, 1
};

// RLE = 27 bytes. 47% reduction
const uint8_t lvl7[] = {
	129, 132, 9, 1, 133, 6, 0, 130, 2, 1, 131, 136, 3, 16, 3, 0, 2, 1, 128, 131, 3, 15, 3, 0, 2, 1, 128, 135, 6, 0, 10, 1
};

// RLE = 27 bytes. 31% reduction
const uint8_t lvl8[] = {
	3, 1, 132, 7, 1, 2, 0, 133, 4, 0, 130, 2, 1, 144, 129, 143, 136, 135, 3, 0, 2, 1, 2, 0, 133, 134, 137, 3, 0, 2, 1, 2, 0, 2, 5, 4, 0, 2, 1, 2, 0, 144, 133, 144, 135, 2, 0, 2, 1, 3, 0, 131, 136, 137, 2, 0, 2, 1, 8, 0, 10, 1
};

// RLE = 35 bytes. 33% reduction
const uint8_t lvl9[] = {
	11, 1, 130, 7, 0, 2, 1, 3, 0, 2, 8, 135, 2, 0, 2, 1, 2, 0, 143, 136, 135, 144, 2, 0, 2, 1, 2, 0, 133, 129, 2, 5, 2, 0, 2, 1, 2, 0, 133, 141, 137, 133, 2, 0, 2, 1, 2, 0, 133, 129, 144, 133, 2, 0, 2, 1, 128, 144, 131, 2, 8, 137, 2, 0, 2, 1, 8, 0, 2, 1, 8, 0, 10, 1
};

// RLE = 16 bytes. 34% reduction
const uint8_t lvl10[] = {
	129, 132, 6, 1, 131, 133, 2, 8, 138, 2, 1, 5, 0, 2, 1, 128, 149, 3, 0, 2, 1, 130, 4, 0, 8, 1
};

// RLE = 52 bytes!! 52% reduction
const uint8_t lvl11[] = {
	24, 0, 2, 1, 141, 135, 3, 1, 2, 0, 2, 5, 2, 1, 128, 134, 143, 135, 2, 1, 128, 131, 136, 137, 2, 1, 4, 0, 2, 1, 130, 128, 138, 128, 7, 1, 24, 0
};

// RLE = 25 bytes. 35% reduction
const uint8_t lvl12[] = {
	10, 1, 134, 135, 132, 144, 135, 2, 0, 2, 1, 143, 131, 137, 129, 131, 135, 128, 2, 1, 131, 135, 134, 135, 134, 137, 128, 2, 1, 144, 131, 137, 131, 137, 2, 0, 2, 1, 7, 0, 2, 1, 6, 0, 130, 10, 1
};

// RLE = 26 bytes. 43% reduction
const uint8_t lvl13[] = {
	129, 132, 8, 1, 6, 0, 138, 2, 1, 128, 130, 128, 130, 128, 130, 128, 2, 1, 128, 131, 5, 8, 2, 1, 128, 130, 128, 130, 128, 130, 128, 2, 1, 7, 0, 10, 1
};

// RLE = 24 bytes. 39% reduction
const uint8_t lvl14[] = {
	10, 1, 130, 2, 0, 138, 3, 0, 2, 1, 2, 0, 4, 8, 128, 2, 1, 128, 138, 128, 149, 128, 138, 128, 2, 1, 128, 137, 5, 0, 2, 1, 3, 0, 142, 3, 0, 10, 1
};

// RLE = 23 bytes. 34% reduction
const uint8_t lvl15[] = {
	4, 1, 132, 6, 1, 128, 134, 136, 143, 136, 135, 2, 0, 2, 1, 130, 136, 128, 133, 149, 133, 2, 0, 2, 1, 128, 133, 129, 133, 129, 133, 128, 3, 1, 128, 131, 3, 16, 137, 2, 0, 2, 1, 8, 0, 11, 1
};

// RLE = 24 bytes. 34% reduction
const uint8_t lvl16[] = {
	10, 1, 141, 135, 138, 2, 8, 128, 135, 2, 1, 2, 0, 144, 136, 128, 144, 128, 2, 1, 130, 128, 138, 136, 128, 143, 128, 2, 1, 128, 131, 138, 6, 1, 4, 0, 133, 2, 0, 2, 1, 4, 0, 133, 2, 0, 10, 1
};

// RLE = 39 bytes. 49% reduction
const uint8_t lvl17[] = {
	10, 1, 7, 0, 2, 1, 3, 0, 130, 136, 2, 5, 2, 1, 128, 4, 1, 2, 0, 2, 1, 7, 0, 2, 1, 7, 0, 2, 1, 7, 0, 2, 1, 141, 149, 136, 149, 136, 149, 138, 10, 1
};

// RLE = 19 bytes. 25% reduction
const uint8_t lvl18[] = {
	11, 1, 130, 2, 0, 138, 137, 138, 134, 138, 2, 1, 128, 133, 128, 138, 128, 138, 128, 138, 2, 1, 128, 141, 128, 138, 128, 136, 128, 136, 2, 1, 128, 136, 128, 138, 128, 138, 128, 138, 2, 1, 128, 136, 128, 138, 128, 138, 128, 138, 2, 1, 3, 0, 133, 131, 138, 135, 138, 11, 1
};


// RLE = 19 bytes. 40% reduction
const uint8_t lvl19[] = {
	4, 1, 132, 4, 1, 130, 128, 2, 5, 136, 135, 2, 1, 3, 0, 143, 136, 138, 2, 1, 5, 0, 138, 2, 1, 6, 0, 9, 1
};

#endif