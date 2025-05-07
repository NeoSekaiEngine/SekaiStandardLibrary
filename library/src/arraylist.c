#include "SekaiStandardLibrary/arraylist.h"

#include <stdlib.h>

#include "SekaiStandardLibrary/definition.h"
#include "_internal/assert.h"

sk_bool sk_arraylist_init(sk_arraylist* lst, sk_size elementSize)
{
    ASSERT_RETURN_VALUE(NULL == lst, SK_FALSE);
    ASSERT_RETURN_VALUE(0 == elementSize, SK_FALSE);
    ASSERT_RETURN_VALUE(NULL != lst->_data, SK_FALSE);
    
    lst->_elementSize = elementSize;
    lst->size = 0;
    lst->_data = malloc(elementSize);
    ASSERT_RETURN_VALUE(NULL == lst->_data, SK_FALSE);
    lst->capacity = 1;

    return SK_TRUE;
}

sk_bool sk_arraylist_destroy(sk_arraylist* lst)
{
    ASSERT_RETURN_VALUE(NULL == lst, SK_FALSE);
    ASSERT_RETURN_VALUE(NULL == lst->_data, SK_FALSE);
    free(lst->_data);
    lst->_data = NULL;
    lst->_elementSize = 0;
    lst->size = 0;
    lst->capacity = 0;
    return SK_TRUE;
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

