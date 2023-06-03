#include "q.h"

#include <iostream>
#include <string>

// Returns the index of the fist space character in a string.
int CPPLib::IndexOfFirstSpace(std::string &input) {
    if (input.size() == 0) {
        return -1;
    }

    for (int i = 0, n = input.size(); i < n; i++) {
        if (input[i] == ' ') {
            return i;
        }
    }

    return -1;
}