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