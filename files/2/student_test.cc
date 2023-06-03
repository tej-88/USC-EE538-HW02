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

TEST(IndexOfFirstSpace, FirstSpace) {
    CPPLib s;
    std::string input = " Adam";
    int actual = s.IndexOfFirstSpace(input);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}

TEST(IndexOfFirstSpace, LastSpace) {
    CPPLib s;
    std::string input = "Adam ";
    int actual = s.IndexOfFirstSpace(input);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

TEST(IndexOfFirstSpace, MidSpace) {
    CPPLib s;
    std::string input = "Adam J";
    int actual = s.IndexOfFirstSpace(input);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}