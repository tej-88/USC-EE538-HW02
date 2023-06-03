
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
//-----------------------------------------------------------------------------

TEST(CapitalizeFirstLetter, EmptyInput) {
    CPPLib s;
    std::string input;
    bool actual_bool = s.CapitalizeFirstLetter(input);
    std::string expected;
    EXPECT_EQ(expected, input);
    EXPECT_FALSE(actual_bool);
}

TEST(CapitalizeFirstLetter, NoLetter) {
    CPPLib s;
    std::string input = "123 ";
    bool actual_bool = s.CapitalizeFirstLetter(input);
    std::string expected = "123 ";
    EXPECT_EQ(expected, input);
    EXPECT_FALSE(actual_bool);
}