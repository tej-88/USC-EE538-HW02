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

TEST(NumberOfVowels, AllVowels) {
    CPPLib s;
    std::string input = "ei uo";
    int actual = s.NumberOfVowels(input);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfVowels, SomeVowels) {
    CPPLib s;
    std::string input = "eiR fruo";
    int actual = s.NumberOfVowels(input);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfVowels, AllNums) {
    CPPLib s;
    std::string input = "1234";
    int actual = s.NumberOfVowels(input);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfVowels, NoVowelsDiffCase) {
    CPPLib s;
    std::string input = "bCSrg";
    int actual = s.NumberOfVowels(input);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfVowels, AllVowelsDiffCase) {
    CPPLib s;
    std::string input = "Ei uO";;
    int actual = s.NumberOfVowels(input);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfVowels, SomeVowelsDiffCase) {
    CPPLib s;
    std::string input = "The Great Story.";;
    int actual = s.NumberOfVowels(input);
    int expected = 4;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfVowels, SpecialChars) {
    CPPLib s;
    std::string input = "?\" \\)(*&^%)'";
    int actual = s.NumberOfVowels(input);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------

TEST(NumberOfConsonants, EmptyInput) {
    CPPLib s;
    std::string input;
    int actual = s.NumberOfConsonants(input);
    int expected = -1;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfConsonants, AllConsonants) {
    CPPLib s;
    std::string input = "bcdrg";
    int actual = s.NumberOfConsonants(input);
    int expected = 5;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfConsonants, NoConsonants) {
    CPPLib s;
    std::string input = "eiuo";
    int actual = s.NumberOfConsonants(input);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfConsonants, SomeConsonants) {
    CPPLib s;
    std::string input = "eigfruo";
    int actual = s.NumberOfConsonants(input);
    int expected = 3;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfConsonants, AllNums) {
    CPPLib s;
    std::string input = "1234";
    int actual = s.NumberOfConsonants(input);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfConsonants, AllConsonantsDiffCase) {
    CPPLib s;
    std::string input = "bCSrg";
    int actual = s.NumberOfConsonants(input);
    int expected = 5;
    EXPECT_EQ(expected, actual);
}

TEST(NumberOfConsonants, NoConsonantsDiffCase) {
    CPPLib s;
    std::string input = "Ei uO";;
    int actual = s.NumberOfConsonants(input);
    int expected = 0;
    EXPECT_EQ(expected, actual);
}