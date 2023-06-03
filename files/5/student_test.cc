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

TEST(ConcatenateArray, EmptyFirst) {
    CPPLib s;

    int size_1 = 0;
    int size_2 = 3;
    int size = size_1 + size_2;

    int array_1[size_1];
    int array_2[size_2] = {1, 2, 3};
    
    int *actual = s.Concatenate(array_1, size_1, array_2, size_2);
    
    int expected[size] = {1, 2, 3};

    for (int i = 0; i < size; i++) {
        EXPECT_EQ(expected[i], actual[i]);
    }

    delete [] actual;
}

TEST(ConcatenateArray, EmptyLast) {
    CPPLib s;

    int size_1 = 3;
    int size_2 = 0;
    int size = size_1 + size_2;

    int array_1[size_1] = {1, 2, 3};
    int array_2[size_2];
    
    int *actual = s.Concatenate(array_1, size_1, array_2, size_2);
    
    int expected[size] = {1, 2, 3};

    for (int i = 0; i < size; i++) {
        EXPECT_EQ(expected[i], actual[i]);
    }

    delete [] actual;
}

TEST(ConcatenateArray, NonEmptyInput) {
    CPPLib s;

    int size_1 = 3;
    int size_2 = 4;
    int size = size_1 + size_2;

    int array_1[size_1] = {1, 2, 3};
    int array_2[size_2] = {3, 4, 5, 8};
    
    int *actual = s.Concatenate(array_1, size_1, array_2, size_2);
    
    int expected[size] = {1, 2, 3, 3, 4, 5, 8};

    for (int i = 0; i < size; i++) {
        EXPECT_EQ(expected[i], actual[i]);
    }

    delete [] actual;
}

// Write several test cases for each function.
//-----------------------------------------------------------------------------
// Make sure you add some test cases to check for nullptr.

TEST(ConcatenateVector, EmptyInput) {
    CPPLib s;

    std::vector<int> vec_1;
    std::vector<int> vec_2;
    
    std::vector<int> actual = s.Concatenate(vec_1, vec_2);
    std::vector<int> expected;

    EXPECT_EQ(expected, actual);
}

TEST(ConcatenateVector, EmptyFirst) {
    CPPLib s;

    std::vector<int> vec_1;
    std::vector<int> vec_2 = {1, 2};
    
    std::vector<int> actual = s.Concatenate(vec_1, vec_2);
    std::vector<int> expected = {1, 2};

    EXPECT_EQ(expected, actual);
}

TEST(ConcatenateVector, EmptyLast) {
    CPPLib s;

    std::vector<int> vec_1 = {1, 2};
    std::vector<int> vec_2;
    
    std::vector<int> actual = s.Concatenate(vec_1, vec_2);
    std::vector<int> expected = {1, 2};

    EXPECT_EQ(expected, actual);
}

TEST(ConcatenateVector, NonEmptyInput) {
    CPPLib s;

    std::vector<int> vec_1 = {1, 2};
    std::vector<int> vec_2 = {3, 4, 5};
    
    std::vector<int> actual = s.Concatenate(vec_1, vec_2);
    std::vector<int> expected = {1, 2, 3, 4, 5};

    EXPECT_EQ(expected, actual);
}