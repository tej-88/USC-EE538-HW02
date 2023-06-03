#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(GetFullName, EmptyInput) {
    CPPLib s;
    std::string first;
    std::string last;
    std::string actual = s.GetFullName(first, last);
    std::string expected = " ";
    EXPECT_EQ(expected, actual);
}

TEST(GetFullName, EmptyFirst) {
    CPPLib s;
    std::string first;
    std::string last = "Adams";
    std::string actual = s.GetFullName(first, last);
    std::string expected = " Adams";
    EXPECT_EQ(expected, actual);
}

TEST(GetFullName, EmptyLast) {
    CPPLib s;
    std::string first = "John";
    std::string last;
    std::string actual = s.GetFullName(first, last);
    std::string expected = "John ";
    EXPECT_EQ(expected, actual);
}

TEST(GetFullName, NonEmptyInput) {
    CPPLib s;
    std::string first = "John";
    std::string last = "Adams";
    std::string actual = s.GetFullName(first, last);
    std::string expected = "John Adams";
    EXPECT_EQ(expected, actual);
}