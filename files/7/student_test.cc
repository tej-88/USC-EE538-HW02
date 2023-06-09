#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"
// Write several test cases for each function.
//-----------------------------------------------------------------------------

TEST(SwapByPointer, DuplicateInputs) {
    CPPLib s;
    float input1 = 2;
    float input2 = 2;
    s.SwapByPointer(&input1, &input2);

    EXPECT_EQ(input1, 2);
    EXPECT_EQ(input2, 2);
}

TEST(SwapByPointer, UniqueInputs) {
    CPPLib s;
    float input1 = 3;
    float input2 = 2;
    s.SwapByPointer(&input1, &input2);

    EXPECT_EQ(input1, 2);
    EXPECT_EQ(input2, 3);
}

// Write several test cases for each function.
//-----------------------------------------------------------------------------

TEST(SwapByReference, DuplicateInputs) {
    CPPLib s;
    float input1 = 2;
    float input2 = 2;
    s.SwapByReference(input1, input2);

    EXPECT_EQ(input1, 2);
    EXPECT_EQ(input2, 2);
}

TEST(SwapByReference, UniqueInputs) {
    CPPLib s;
    float input1 = 2;
    float input2 = 3;
    s.SwapByReference(input1, input2);

    EXPECT_EQ(input1, 3);
    EXPECT_EQ(input2, 2);
}