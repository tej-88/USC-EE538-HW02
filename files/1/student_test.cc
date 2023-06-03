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

TEST(GetFullName, NumInput) {
    CPPLib s;
    std::string first = "430";
    std::string last = "Adams";
    std::string actual = s.GetFullName(first, last);
    std::string expected = "430 Adams";
    EXPECT_EQ(expected, actual);
}

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(CountCharacters, EmptyStr) {
    CPPLib s;
    std::string input;
    std::vector<char> chars = {'a', 't', 'o'};
    int actual = s.CountCharacters(input, chars);
    int expected = -1;
    EXPECT_EQ(expected, actual);
}

TEST(CountCharacters, EmptyChars) {
    CPPLib s;
    std::string input = "hey! ";
    std::vector<char> chars;
    int actual = s.CountCharacters(input, chars);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}

TEST(CountCharacters, NoMatch) {
    CPPLib s;
    std::string input = "hey! ";
    std::vector<char> chars = {'a', '.', 'b'};
    int actual = s.CountCharacters(input, chars);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}

TEST(CountCharacters, NormalInput) {
    CPPLib s;
    std::string input = "This is a test";
    std::vector<char> chars = {'t','h'};
    int actual = s.CountCharacters(input, chars);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

TEST(CountCharacters, CaseMismatch) {
    CPPLib s;
    std::string input = "THIS IS A TEST !, ?";
    std::vector<char> chars = {'t','h', 'e'};
    int actual = s.CountCharacters(input, chars);
    int expected = 5;
    EXPECT_EQ(expected, actual);
}

TEST(CountCharacters, AllMatch) {
    CPPLib s;
    std::string input = "THIS IS A TEST ";
    std::vector<char> chars = {'t','h', 'e', 'i', 's', 'a'};
    int actual = s.CountCharacters(input, chars);
    int expected = 11;
    EXPECT_EQ(expected, actual);
}

TEST(CountCharacters, NumChars) {
    CPPLib s;
    std::string input = "THIS IS A TEST ";
    std::vector<char> chars = {'1', '5'};
    int actual = s.CountCharacters(input, chars);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}