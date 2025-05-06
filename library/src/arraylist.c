#include "SekaiStandardLibrary/arraylist.h"
#include "SekaiStandardLibrary/definition.h"

struct _sk_arraylist
{
    void* _data;
    sk_size size;
    sk_size capacity;
};

sk_bool sk_arraylist_init(sk_arraylist* lst, sk_size elementSize)
{
    return SK_FALSE;
}

sk_bool sk_arraylist_destroy(sk_arraylist* lst)
{
    return SK_FALSE;
}

sk_bool sk_arraylist_add(sk_arraylist* lst, void* element, sk_size elementSize)
{
    return SK_FALSE;
}

void* sk_arraylist_get(sk_arraylist* lst, sk_size index, sk_size* elementSize)
{
    return NULL;
}

sk_bool sk_arraylist_set(sk_arraylist* lst, sk_size index, void* element, sk_size elementSize)
{
    return SK_FALSE;
}

sk_u8 sk_arraylist_resize(sk_arraylist* lst, sk_size capacity)
{
    return SK_FALSE;
}

