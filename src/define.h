#ifndef DEFINE_H
#define DEFINE_H

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>

// Boolean
typedef bool b8;
static_assert(sizeof(b8) == 1, "size of i8 must be 1 byte");

// Integer
typedef int8_t i8;
static_assert(sizeof(i8) == 1, "size of i8 must be 1 byte");

typedef int16_t i16;
static_assert(sizeof(i16) == 2, "size of i16 must be 2 bytes");

typedef int32_t i32;
static_assert(sizeof(i32) == 4, "size of i32 must be 4 bytes");

typedef int64_t i64;
static_assert(sizeof(i64) == 8, "size of i64 must be 8 bytes");

typedef uint8_t u8;
static_assert(sizeof(u8) == 1, "size of u8 must be 1 byte");

typedef uint16_t u16;
static_assert(sizeof(u16) == 2, "size of u16 must be 2 bytes");

typedef uint32_t u32;
static_assert(sizeof(u32) == 4, "size of u32 must be 4 bytes");

typedef uint64_t u64;
static_assert(sizeof(u64) == 8, "size of u64 must be 8 bytes");

// Floating-Point
typedef float f32;
static_assert(sizeof(f32) == 4, "size of f32 must be 4 bytes");

typedef double f64;
static_assert(sizeof(f64) == 8, "size of f64 must be 8 bytes");

#endif
