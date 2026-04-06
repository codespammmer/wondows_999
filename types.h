//
// Created by HomePC on 05/04/2026.
//

#ifndef WONDOWS_999_TYPES_H
#define WONDOWS_999_TYPES_H

#define VERSION 2

/* unsigned */
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;

/* signed */
typedef signed char int8;
typedef signed short int16;
typedef signed int int32;
typedef signed long long int64;

/* unsigned decimals */
typedef unsigned float uf32;
typedef unsigned double uf64;
typedef unsigned long double uf128_v;

/* signed decimals */
typedef  signed float f32;
typedef  signed double f64;
typedef signed long double f128_v;

typedef struct {
     unsigned int size;
    int data[8];
} Object;

typedef struct {
    unsigned int * size;
    int* data[8];
} Object_ptr;

typedef struct {
    uint64 high;
    uint64 low;
} uint128;

typedef struct {
    int64 high;

} int128;




#endif //WONDOWS_999_TYPES_H
