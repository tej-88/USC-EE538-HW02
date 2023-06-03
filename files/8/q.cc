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