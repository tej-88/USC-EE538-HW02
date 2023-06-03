#include <iostream>
#include <string>
#include "q.h"

#include "gtest/gtest.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------

TEST(Calculate, Add) {
    CPPLib s;
    int a = 10;
    int b = 20;
    float actual = s.Calculate(a, b, Operation::kAdd);
    float expected = 30;
    EXPECT_EQ(expected, actual);
}