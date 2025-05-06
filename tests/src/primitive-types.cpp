#include <gtest/gtest.h>
#include "SekaiStandardLibrary/SekaiStandardLibrary.h"  // Include your header file

TEST(SizeOfTest, PrimitiveTypes) {
    EXPECT_EQ(sizeof(sk_i8), 1);
    EXPECT_EQ(sizeof(sk_i16), 2);
    EXPECT_EQ(sizeof(sk_i32), 4);
    EXPECT_EQ(sizeof(sk_i64), 8); // Adjust for system architecture

    EXPECT_EQ(sizeof(sk_u8), 1);
    EXPECT_EQ(sizeof(sk_u16), 2);
    EXPECT_EQ(sizeof(sk_u32), 4);
    EXPECT_EQ(sizeof(sk_u64), 8); // Adjust accordingly

    EXPECT_EQ(sizeof(sk_f32), 4);
    EXPECT_EQ(sizeof(sk_f64), 8);

    EXPECT_EQ(sizeof(sk_size), sizeof(void*)); 
}

