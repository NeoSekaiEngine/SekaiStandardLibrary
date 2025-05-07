#include "gtest/gtest.h"
#include "SekaiStandardLibrary/arraylist.h"
#include "SekaiStandardLibrary/definition.h"
#include "SekaiStandardLibrary/primitive-types.h"

TEST(ArrayListAllocate, ArrayListInit_elementSize_0)
{
    sk_arraylist lst = { 0 };
    sk_size elementSize = 0;

    sk_bool result = sk_arraylist_init(&lst, elementSize);
    EXPECT_EQ(SK_FALSE, result);
    if(SK_TRUE == result)
    {
        sk_arraylist_destroy(&lst);
    }
}

TEST(ArrayListAllocate, ArrayListInit_lst_NULL)
{
    sk_size elementSize = sizeof(sk_byte);

    sk_bool result = sk_arraylist_init(NULL, elementSize);
    EXPECT_EQ(SK_FALSE, result);

}

TEST(ArrayListAllocate, ArrayListInit_lst_data_not_NULL)
{
    sk_arraylist lst = { 0 };
    lst._data = &lst;
    sk_size elementSize = sizeof(sk_byte);

    sk_bool result = sk_arraylist_init(&lst, elementSize);
    EXPECT_EQ(SK_FALSE, result);
    if(SK_TRUE == result)
    {
        sk_arraylist_destroy(&lst);
    }
}

TEST(ArrayListAllocate, ArrayListInit_elementSize_exceed)
{
    sk_arraylist lst = { 0 };
    sk_size elementSize = (sk_size)-1;

    sk_bool result = sk_arraylist_init(&lst, elementSize);
    EXPECT_EQ(SK_FALSE, result);
    if(SK_TRUE == result)
    {
        sk_arraylist_destroy(&lst);
    }
}

TEST(ArrayListAllocate, ArrayListInit_success)
{
    sk_arraylist lst = { 0 };
    sk_size elementSize = sizeof(sk_byte);

    sk_bool result = sk_arraylist_init(&lst, elementSize);
    EXPECT_EQ(SK_TRUE, result);
    if(SK_TRUE == result)
    {
        sk_arraylist_destroy(&lst);
    }
}
