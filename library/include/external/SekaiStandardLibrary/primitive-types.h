#ifndef _SEKAI_STANDARD_LIBRARY_PRIMITIVE_TYPES_H_
#define _SEKAI_STANDARD_LIBRARY_PRIMITIVE_TYPES_H_

#ifdef _MSC_VER
// Integer number
typedef __int8           sk_int8;
typedef unsigned __int8  sk_uint8;
typedef __int16          sk_int16;
typedef unsigned __int16 sk_uint16;
typedef __int32          sk_int32;
typedef unsigned __int32 sk_uint32;
typedef __int64          sk_int64;
typedef unsigned __int64 sk_uint64;

//Boolean
typedef __int8           sk_bool;

//Memory
typedef __int8           sk_byte;
#else
#endif//_MSC_VER

//Integer number
typedef sk_int16         sk_word;
typedef sk_uint16        sk_uword;
typedef sk_int32         sk_int;
typedef sk_uint32        sk_uint;
typedef sk_int           sk_long;
typedef sk_uint          sk_ulong;
typedef sk_int64         sk_longlong;
typedef sk_uint64        sk_ulonglong;

//Real number
typedef float            sk_float;
typedef double           sk_double; 

//Character
typedef char             sk_char;

#define sk_true  ((sk_bool)0x1)
#define sk_false ((sk_bool)0x0)

#endif//!_SEKAI_STANDARD_LIBRARY_PRIMITIVE_TYPES_H_
