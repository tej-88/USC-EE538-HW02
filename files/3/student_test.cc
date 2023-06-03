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

TEST(Calculate, Bitwise_AND) {
    CPPLib s;
    int a = 10;
    int b = 20;
    float actual = s.Calculate(a, b, Operation::kBitwise_AND);
    float expected = 0;
    EXPECT_EQ(expected, actual);
}

TEST(Calculate, Bitwise_OR) {
    CPPLib s;
    int a = 10;
    int b = 20;
    float actual = s.Calculate(a, b, Operation::kBitwise_OR);
    float expected = 30;
    EXPECT_EQ(expected, actual);
}

TEST(Calculate, Bitwise_XOR) {
    CPPLib s;
    int a = 10;
    int b = 20;
    float actual = s.Calculate(a, b, Operation::kBitwise_XOR);
    float expected = 30;
    EXPECT_EQ(expected, actual);
}

TEST(Calculate, ShiftLeft) {
    CPPLib s;
    int a = 255;
    int b = 2;
    float actual = s.Calculate(a, b, Operation::kShift_left);
    float expected = 1020;
    EXPECT_EQ(expected, actual);
}

TEST(Calculate, ShiftRight) {
    CPPLib s;
    int a = 255;
    int b = 2;
    float actual = s.Calculate(a, b, Operation::kShift_right);
    float expected = 63;
    EXPECT_EQ(expected, actual);
}