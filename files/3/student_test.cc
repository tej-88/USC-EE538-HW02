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

TEST(Calculate, Subtract) {
    CPPLib s;
    int a = 10;
    int b = 20;
    float actual = s.Calculate(a, b, Operation::kSubtract);
    float expected = -10;
    EXPECT_EQ(expected, actual);
}

TEST(Calculate, Multiply) {
    CPPLib s;
    int a = 10;
    int b = 20;
    float actual = s.Calculate(a, b, Operation::kMultiplication);
    float expected = 200;
    EXPECT_EQ(expected, actual);
}

TEST(Calculate, Divide) {
    CPPLib s;
    int a = 10;
    int b = 20;
    float actual = s.Calculate(a, b, Operation::kDivision);
    float expected = 0.5;
    EXPECT_EQ(expected, actual);
}