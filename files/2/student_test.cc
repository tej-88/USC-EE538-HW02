#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------

TEST(IndexOfFirstSpace, EmptyInput) {
    CPPLib s;
    std::string input;
    int actual = s.IndexOfFirstSpace(input);
    int expected = -1;
    EXPECT_EQ(expected, actual);
}

TEST(IndexOfFirstSpace, NoSpace) {
    CPPLib s;
    std::string input = "Adam";
    int actual = s.IndexOfFirstSpace(input);
    int expected = -1;
    EXPECT_EQ(expected, actual);
}