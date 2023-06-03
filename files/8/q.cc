#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#include "q.h"

// Write a function that takes a vector of positive integers as input. The
// output is the same vector where all duplicates are removed. Note that the
// output is the same vector means the function's return type should be void
// and do the modifications on the input vector. Example: before: v=[1, 2, 2,
// 4], after : v=[1, 2, 4] Solve this for the following cases: You cannot use
// std::set
void CPPLib::UniqueVectorNotBySet(std::vector<int> &input) {
    std::vector<int> tmp;

    for (const auto &x : input) {
        auto it = std::find(tmp.begin(), tmp.end(), x);
        if (it == tmp.end()) {
            tmp.push_back(x);
        }
    }

    input.clear();
    input = tmp;

    return;
}

// You can use std::set
void CPPLib::UniqueVectorBySet(std::vector<int> &input) {
    std::set<int> tmp_set;

    for (const auto &x : input) {
        tmp_set.insert(x);
    }

    input.clear();

    for (auto it = tmp_set.begin(); it != tmp_set.end(); it++) {
        input.push_back(*it);
    }

    return;
}

// Write a function that takes two vectors v1 and v2 and returns a new vector
// that is the intersection of the values in v1 and v2. All the values in
// return vector should be unique. Example: input: v1={1, 2, 2, 3}, v2={3, 4,
// 4, 5}, output = {1, 2, 3, 4, 5}
std::vector<int> CPPLib::IntersectVectors(std::vector<int> &input1,
                                std::vector<int> &input2) {
                                    std::vector<int> result;

                                    for (const auto &x : input1) {
                                        result.push_back(x);
                                    }

                                    for (const auto &y : input2) {
                                        result.push_back(y);
                                    }

                                    UniqueVectorBySet(result);

                                    return result;
                                }