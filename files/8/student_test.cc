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

TEST(UniqueVectorBySet, UniqueInput) {
    CPPLib s;
    std::vector<int> input = {1, 1, 1};
    s.UniqueVectorBySet(input);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, input);
}

TEST(UniqueVectorBySet, MixedInput) {
    CPPLib s;
    std::vector<int> input = {1, 2, 2, 4};
    s.UniqueVectorBySet(input);
    std::vector<int> expected = {1, 2, 4};
    EXPECT_EQ(expected, input);
}

// Write several test cases for each function.
//-----------------------------------------------------------------------------

TEST(IntersectVectors, EmptyInput) {
    CPPLib s;
    std::vector<int> input_1;
    std::vector<int> input_2;
    std::vector<int> actual = s.IntersectVectors(input_1, input_2);
    std::vector<int> expected;
    EXPECT_EQ(expected, actual);
}

TEST(IntersectVectors, EmptyFirst) {
    CPPLib s;
    std::vector<int> input_1;
    std::vector<int> input_2 = {1, 2, 3};
    std::vector<int> actual = s.IntersectVectors(input_1, input_2);
    std::vector<int> expected = {1, 2, 3};
    EXPECT_EQ(expected, actual);
}

TEST(IntersectVectors, EmptySecond) {
    CPPLib s;
    std::vector<int> input_1 = {1, 2, 3};
    std::vector<int> input_2;
    std::vector<int> actual = s.IntersectVectors(input_1, input_2);
    std::vector<int> expected = {1, 2, 3};
    EXPECT_EQ(expected, actual);
}

TEST(IntersectVectors, EmptySecondDuplicate) {
    CPPLib s;
    std::vector<int> input_1 = {1, 1, 1};
    std::vector<int> input_2;
    std::vector<int> actual = s.IntersectVectors(input_1, input_2);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, actual);
}

TEST(IntersectVectors, EmptyFirstDuplicate) {
    CPPLib s;
    std::vector<int> input_1;
    std::vector<int> input_2 = {1, 1, 1};
    std::vector<int> actual = s.IntersectVectors(input_1, input_2);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, actual);
}

TEST(IntersectVectors, SameInputDuplicate) {
    CPPLib s;
    std::vector<int> input_1 = {1, 1, 1};
    std::vector<int> input_2 = {1, 1, 1};
    std::vector<int> actual = s.IntersectVectors(input_1, input_2);
    std::vector<int> expected = {1};
    EXPECT_EQ(expected, actual);
}