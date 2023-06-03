#include "q.h"

#include <iostream>
#include <vector>

// Concatenate two dynamic arrays.
// Example:
// array_1 = {1, 2}, size_1 = 2
// array_2 = {2, 3, 4}, size_12 = 3
// Output: {1, 2, 2, 3, 4}.
// Question 1: Why did we have to proved size_1, size_2 as an input?
// Question 2: How can we know the size of the output?
int* CPPLib::Concatenate(int* array_1, int size_1, int* array_2, int size_2) {
    int size = size_1 + size_2;

    if (size == 0) {
        return nullptr;
    }
    else if (size_1 == 0) {
        int* array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = array_2[i];
        }
        return array;
    }
    else if (size_2 == 0) {
        int* array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = array_1[i];
        }
        return array;
    }
    else {
        int* array = new int[size];
        
        for (int i = 0; i < size_1; i++) {
            array[i] = array_1[i];
        }

        for (int j = 0; j < size_2; j++) {
            array[size_1 + j] = array_2[j];
        }

        return array;
    }
}

// Concatenate two dynamic vectors.
// Example:
// vector_1 = {1, 2}
// vector_2 = {2, 3, 4}
// Output: {1, 2, 2, 3, 4}.
// Question 1: Why didn't we provide the sizes?
// Question 2: We have two functions with the name of Concatenate. Is this ok?
std::vector<int> CPPLib::Concatenate(std::vector<int>& vector_1,
                            std::vector<int>& vector_2) {
                                std::vector<int> vec;

                                for (const auto &n1 : vector_1) {
                                    vec.push_back(n1);
                                }

                                for (const auto &n2 : vector_2) {
                                    vec.push_back(n2);
                                }

                                return vec;
                            }