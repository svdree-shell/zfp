#ifndef HASH_64_H
#define HASH_64_H

#include "include/zfp/types.h"
#include "hashBase.h"

// all functions are used to hash 64-bit valued arrays (int64, double)

uint64
hashArray(const uint64* arr, size_t nx, int sx);

uint64
hashStridedArray(const uint64* arr, size_t n[4], int s[4]);

uint64
hash2dStridedBlock(const uint64* arr, int sx, int sy);

uint64
hash3dStridedBlock(const uint64* arr, int sx, int sy, int sz);

uint64
hash4dStridedBlock(const uint64* arr, int sx, int sy, int sz, int sw);

#endif
