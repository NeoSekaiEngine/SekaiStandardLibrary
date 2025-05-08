#ifndef SEKAI_STANDARD_LIBRARY_ARRAYLIST_H_
#define SEKAI_STANDARD_LIBRARY_ARRAYLIST_H_

#include "SekaiStandardLibrary/primitive-types.h"

#ifdef __cplusplus
extern "C"
{
#endif

struct _sk_arraylist
{
    void* _data;
    sk_size _elementSize;
    sk_size size;
    sk_size capacity;
};

typedef struct _sk_arraylist sk_arraylist;

sk_bool sk_arraylist_init(sk_arraylist* lst, sk_size elementSize);
void sk_arraylist_destroy(sk_arraylist* lst);
sk_bool sk_arraylist_add(sk_arraylist* lst, void* element, sk_size elementSize);
void* sk_arraylist_get(sk_arraylist* lst, sk_size index, sk_size* elementSize);
sk_bool sk_arraylist_set(sk_arraylist* lst, sk_size index, void* element, sk_size elementSize);
sk_bool sk_arraylist_resize(sk_arraylist* lst, sk_size capacity);

#ifdef __cplusplus
}
#endif

#endif//!SEKAI_STANDARD_LIBRARY_ARRAYLIST_H_
