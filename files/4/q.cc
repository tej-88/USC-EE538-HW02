#include <string>
#include <cctype>
#include "q.h"

// A function that capitalize the first letter of a string.
// If it was possible, returns true, otherwise false.
bool CPPLib::CapitalizeFirstLetter(std::string &input) {
    if (input.size() == 0) {
        return false;
    }

    for (int i = 0, n = input.size(); i < n; i++) {
        if (isalpha(input[i]) != 0) {
            if (islower(input[i]) != 0) {
                input[i] = toupper(input[i]);
                return true;
            }
            else {
                return false;
            }
        }
    }

    return false;
}