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

TEST(IndexOfFirstSpace, MultiSpace) {
    CPPLib s;
    std::string input = "Adam J ";
    int actual = s.IndexOfFirstSpace(input);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

TEST(IndexOfFirstSpace, MultiSpaceConsecutive) {
    CPPLib s;
    std::string input = "Adam  J";
    int actual = s.IndexOfFirstSpace(input);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------

TEST(SeparateFirstAndLastNames, EmptyInput) {
    CPPLib s;
    std::string full_name;
    std::string first;
    std::string last;
    s.SeparateFirstAndLastNames(full_name, first, last);
    std::string expected_first;
    std::string expected_last;
    EXPECT_EQ(expected_first, first);
    EXPECT_EQ(expected_last, last);
}

TEST(SeparateFirstAndLastNames, NoSpace) {
    CPPLib s;
    std::string full_name = "John";
    std::string first;
    std::string last;
    s.SeparateFirstAndLastNames(full_name, first, last);
    std::string expected_first = "John";
    std::string expected_last;
    EXPECT_EQ(expected_first, first);
    EXPECT_EQ(expected_last, last);
}

TEST(SeparateFirstAndLastNames, FirstSpace) {
    CPPLib s;
    std::string full_name = " Johns";
    std::string first;
    std::string last;
    s.SeparateFirstAndLastNames(full_name, first, last);
    std::string expected_first;
    std::string expected_last = "Johns";
    EXPECT_EQ(expected_first, first);
    EXPECT_EQ(expected_last, last);
}

TEST(SeparateFirstAndLastNames, LastSpace) {
    CPPLib s;
    std::string full_name = "Johns ";
    std::string first;
    std::string last;
    s.SeparateFirstAndLastNames(full_name, first, last);
    std::string expected_first = "Johns";
    std::string expected_last;
    EXPECT_EQ(expected_first, first);
    EXPECT_EQ(expected_last, last);
}

TEST(SeparateFirstAndLastNames, MidSpace) {
    CPPLib s;
    std::string full_name = "Johns Cook";
    std::string first;
    std::string last;
    s.SeparateFirstAndLastNames(full_name, first, last);
    std::string expected_first = "Johns";
    std::string expected_last = "Cook";
    EXPECT_EQ(expected_first, first);
    EXPECT_EQ(expected_last, last);
}

TEST(SeparateFirstAndLastNames, MultiSpace) {
    CPPLib s;
    std::string full_name = "Jo hns Cook";
    std::string first;
    std::string last;
    s.SeparateFirstAndLastNames(full_name, first, last);
    std::string expected_first = "Jo";
    std::string expected_last = "hns Cook";
    EXPECT_EQ(expected_first, first);
    EXPECT_EQ(expected_last, last);
}

TEST(SeparateFirstAndLastNames, MultiSpaceConsecutive) {
    CPPLib s;
    std::string full_name = "Jo  hns Cook";
    std::string first;
    std::string last;
    s.SeparateFirstAndLastNames(full_name, first, last);
    std::string expected_first = "Jo";
    std::string expected_last = " hns Cook";
    EXPECT_EQ(expected_first, first);
    EXPECT_EQ(expected_last, last);
}

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------

TEST(NumberOfVowels, EmptyInput) {
    CPPLib s;
    std::string input;
    int actual = s.NumberOfVowels(input);
    int expected = -1;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfVowels, NoVowels) {
    CPPLib s;
    std::string input = "bcdrg";
    int actual = s.NumberOfVowels(input);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}