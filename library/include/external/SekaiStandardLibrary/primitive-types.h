#ifndef SEKAI_STANDARD_LIBRARY_PRIMITIVE_TYPES_H_
#define SEKAI_STANDARD_LIBRARY_PRIMITIVE_TYPES_H_

/* Determine system architecture */
#if defined(__x86_64__) || defined(_M_X64)  /* 64-bit system */
    typedef signed char        sk_i8;
    typedef signed short       sk_i16;
    typedef signed int         sk_i32;
    typedef signed long long   sk_i64;

    typedef unsigned char      sk_u8;
    typedef unsigned short     sk_u16;
    typedef unsigned int       sk_u32;
    typedef unsigned long long sk_u64;
    typedef unsigned long long sk_size;
#else  /* 32-bit system */
    typedef signed char        sk_i8;
    typedef signed short       sk_i16;
    typedef signed int         sk_i32;
    typedef signed long long   sk_i64;  

    typedef unsigned char      sk_u8;
    typedef unsigned short     sk_u16;
    typedef unsigned int       sk_u32;
    typedef unsigned long long sk_u64;
    typedef unsigned long      sk_size;
#endif

/* Define floating point types */
typedef float  sk_f32;
typedef double sk_f64;

/* Define other types */
typedef sk_u8 sk_byte;
typedef sk_u8 sk_bool;

#endif //!SEKAI_STANDARD_LIBRARY_PRIMITIVE_TYPES_H_
