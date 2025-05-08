#include "./arraylist.hpp"

#include "SekaiStandardLibrary/definition.h"
#include "SekaiStandardLibrary/primitive-types.h"


TestSuite_ArrayListMethods::TestSuite_ArrayListMethods()
    :lst_({0})
{

}
TestSuite_ArrayListMethods::~TestSuite_ArrayListMethods()
{

}

void TestSuite_ArrayListMethods::SetUp()
{
    sk_bool result = SK_FALSE;
    result = sk_arraylist_init(&lst_, sizeof(sk_u64));
    if(!result)
    {
        GTEST_SKIP() << "Failed to init Array list";
    }
}

void TestSuite_ArrayListMethods::TearDown()
{
    sk_arraylist_destroy(&lst_);
}

TEST(ArrayListAllocate, ArrayListInit_elementSize_0)
{
    sk_arraylist lst = { 0 };
    sk_size elementSize = 0;

    sk_bool result = sk_arraylist_init(&lst, elementSize);
    EXPECT_EQ(SK_FALSE, result);
    EXPECT_EQ(0, lst._elementSize);
    EXPECT_EQ(nullptr, lst._data);
    EXPECT_EQ(0, lst.capacity);
    EXPECT_EQ(0, lst.size);
    if(SK_TRUE == result)
    {
        sk_arraylist_destroy(&lst);
    }
}

TEST(ArrayListAllocate, ArrayListInit_lst_NULL)
{
    sk_size elementSize = sizeof(sk_byte);

    sk_bool result = sk_arraylist_init(nullptr, elementSize);
    EXPECT_EQ(SK_FALSE, result);

}

TEST(ArrayListAllocate, ArrayListInit_lst_data_not_NULL)
{
    sk_arraylist lst = { 0 };
    lst._data = &lst;
    sk_size elementSize = sizeof(sk_byte);

    sk_bool result = sk_arraylist_init(&lst, elementSize);
    EXPECT_EQ(SK_FALSE, result);
    EXPECT_EQ(0, lst._elementSize);
    EXPECT_NE(nullptr, lst._data);
    EXPECT_EQ(0, lst.capacity);
    EXPECT_EQ(0, lst.size);
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
    EXPECT_EQ(elementSize, lst._elementSize);
    EXPECT_EQ(nullptr, lst._data);
    EXPECT_EQ(0, lst.capacity);
    EXPECT_EQ(0, lst.size);
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
    EXPECT_EQ(elementSize, lst._elementSize);
    EXPECT_NE(nullptr, lst._data);
    EXPECT_EQ(1, lst.capacity);
    EXPECT_EQ(0, lst.size);
    if(SK_TRUE == result)
    {
        sk_arraylist_destroy(&lst);
    }
}

TEST_F(TestSuite_ArrayListMethods, ArrayListAdd_lst_NULL)
{
    sk_u64 element = 0x1;
    
    sk_bool result = sk_arraylist_add(nullptr, &element, sizeof(element));
    EXPECT_EQ(SK_FALSE, result);
}

TEST_F(TestSuite_ArrayListMethods, ArrayListAdd_lst_data_NULL)
{
    free(lst_._data);
    lst_._data = nullptr;
    sk_u64 element = 0x1;
    
    sk_bool result = sk_arraylist_add(&lst_, &element, sizeof(element));
    EXPECT_EQ(SK_FALSE, result);
}

TEST_F(TestSuite_ArrayListMethods, ArrayListAdd_element_NULL)
{   
    sk_bool result = sk_arraylist_add(&lst_, nullptr, sizeof(sk_u64));
    EXPECT_EQ(SK_FALSE, result);
}

TEST_F(TestSuite_ArrayListMethods, ArrayListAdd_elementSize_incorrect)
{   
    sk_u64 element = 0x1;
    sk_bool result = sk_arraylist_add(&lst_, &element, sizeof(sk_u8));
    EXPECT_EQ(SK_FALSE, result);
}