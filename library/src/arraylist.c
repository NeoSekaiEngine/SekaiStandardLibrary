#include "SekaiStandardLibrary/arraylist.h"

#include <stdlib.h>
#include <string.h>

#include "SekaiStandardLibrary/definition.h"
#include "SekaiStandardLibrary/primitive-types.h"
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
    memset(lst->_data, 0x0, elementSize);
    lst->capacity = 1;

    return SK_TRUE;
}

void sk_arraylist_destroy(sk_arraylist* lst)
{
    ASSERT_NO_RETURN(NULL == lst);
    ASSERT_NO_RETURN(NULL == lst->_data);
    free(lst->_data);
    lst->_data = NULL;
    lst->_elementSize = 0;
    lst->size = 0;
    lst->capacity = 0;
}

sk_bool sk_arraylist_add(sk_arraylist* lst, void* element, sk_size elementSize)
{
    void* newData = NULL;
    void* pAddedAddr = NULL;

    ASSERT_RETURN_VALUE(NULL == lst, SK_FALSE);
    ASSERT_RETURN_VALUE(NULL == lst->_data, SK_FALSE);
    ASSERT_RETURN_VALUE(NULL == element, SK_FALSE);
    ASSERT_RETURN_VALUE(lst->_elementSize != elementSize, SK_FALSE);

    if(lst->size >= lst->capacity)
    {
        newData = malloc(lst->capacity * 2);
        ASSERT_RETURN_VALUE(NULL == newData, SK_FALSE);
        memcpy(newData, lst->_data, lst->capacity * elementSize);
        free(lst->_data);
        lst->_data = newData;
        lst->capacity = lst->capacity * 2;
    }
    pAddedAddr = ((sk_byte*)lst->_data + (lst->size + 1) * elementSize); 
    memcpy(pAddedAddr, element, elementSize);
    ++(lst->size);
    return SK_TRUE;
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

