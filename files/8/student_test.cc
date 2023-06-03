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