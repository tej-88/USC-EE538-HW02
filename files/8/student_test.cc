#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"

// Write several test cases for each function.
//-----------------------------------------------------------------------------

TEST(UniqueVectorNotBySet, EmptyInput) {
    CPPLib s;
    std::vector<int> input;
    s.UniqueVectorNotBySet(input);
    std::vector<int> expected;
    EXPECT_EQ(expected, input);
}

TEST(UniqueVectorNotBySet, SingleInput) {
    CPPLib s;
    std::vector<int> input = {1};
    s.UniqueVectorNotBySet(input);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, input);
}

TEST(UniqueVectorNotBySet, UniqueInput) {
    CPPLib s;
    std::vector<int> input = {1, 2, 3};
    s.UniqueVectorNotBySet(input);
    std::vector<int> expected = {1, 2, 3};
    EXPECT_EQ(expected, input);
}

TEST(UniqueVectorNotBySet, DuplicateInput) {
    CPPLib s;
    std::vector<int> input = {1, 1, 1};
    s.UniqueVectorNotBySet(input);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, input);
}

TEST(UniqueVectorNotBySet, MixedInput) {
    CPPLib s;
    std::vector<int> input = {1, 2, 2, 4};
    s.UniqueVectorNotBySet(input);
    std::vector<int> expected = {1, 2, 4};
    EXPECT_EQ(expected, input);
}

// Write several test cases for each function.
//-----------------------------------------------------------------------------

TEST(UniqueVectorBySet, EmptyInput) {
    CPPLib s;
    std::vector<int> input;
    s.UniqueVectorBySet(input);
    std::vector<int> expected;
    EXPECT_EQ(expected, input);
}

TEST(UniqueVectorBySet, SingleInput) {
    CPPLib s;
    std::vector<int> input = {1};
    s.UniqueVectorBySet(input);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, input);
}

TEST(UniqueVectorBySet, DuplicateInput) {
    CPPLib s;
    std::vector<int> input = {1, 1, 1};
    s.UniqueVectorBySet(input);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, input);
}