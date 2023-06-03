#include "q.h"

#include <iostream>
#include <vector>

// Given two separate strings for first and last names, return the full name.
std::string CPPLib::GetFullName(std::string& first_name, std::string& last_name) {
    return first_name + " " + last_name;
}

// Given a string and a list of characters, find how many times any of those
// characters appeared in the input string. Make the comparison case
// insensitive. Example: Input: "This is a test", characters = {'t','h'}
// Output: 4

// YOU CANNOT USE ANY LIBRARY FUNCTIONS FROM std::
int CPPLib::CountCharacters(std::string& input, std::vector<char> characters) {
    if (input.size() == 0) {
        return -1;
    }

    int count = 0;
    
    for (const auto & ch : characters) {
        for (const auto &lt : input) {
            if (isalpha(lt)) {
                if (tolower(ch) == tolower(lt)) {
                    count++;
                }
            }
        }
    }
    
    return count;
}