#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"

// Write several test cases for each function.
//-----------------------------------------------------------------------------
// Make sure you add some test cases to check for nullptr.

TEST(ConcatenateArray, EmptyInput) {
    CPPLib s;

    int size_1 = 0;
    int size_2 = 0;

    int *array_1 = new int[size_1];
    int *array_2 = new int[size_2];

    int *array = s.Concatenate(array_1, size_1, array_2, size_2);
    EXPECT_EQ(array, nullptr);

    delete [] array_1;
    delete [] array_2;
    delete [] array;
}