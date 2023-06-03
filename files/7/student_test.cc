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