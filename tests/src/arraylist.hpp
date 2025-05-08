#ifndef SEKAI_STANDARD_LIBRARY_TESTS_ARRAYLIST_H_
#define SEKAI_STANDARD_LIBRARY_TESTS_ARRAYLIST_H_

#include "gtest/gtest.h"
#include "SekaiStandardLibrary/arraylist.h"

class TestSuite_ArrayListMethods: public testing::Test
{
protected:
    TestSuite_ArrayListMethods();
    ~TestSuite_ArrayListMethods() override;
    void SetUp() override;
    void TearDown() override;

    sk_arraylist lst_;
};


#endif//!SEKAI_STANDARD_LIBRARY_TESTS_ARRAYLIST_H_