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

// Given the full_name, it returns the first_name and last_name.
// Note: you should use IndexOfFirstSpace function and cannot use any other
// std:: functions.
void CPPLib::SeparateFirstAndLastNames(std::string &full_name,
                                std::string &first_name,
                                std::string &last_name) {
                                    int space_idx = IndexOfFirstSpace(full_name);

                                    if ((space_idx == -1) && (full_name.size() == 0)) {
                                        return;
                                    }
                                    else if (space_idx == -1){
                                        first_name = full_name;
                                        return;
                                    }

                                    for (int i = 0, n = full_name.size(); i < n; i++) {
                                        if (i < space_idx) {
                                            first_name.push_back(full_name.at(i));
                                        }
                                        else if (i > space_idx) {
                                            last_name.push_back(full_name.at(i));
                                        }
                                    }

                                    return;
                                }

// Returns the number of vowels (a, e, i, o, u) in a string.
// Your algorithm should be case insensitive.
int CPPLib::NumberOfVowels(std::string &input) {
    if (input.size() == 0) {
        return -1;
    }

    std::string vowels = "aeiou";
    int num_vowels = 0;

    for (const auto &v : vowels) {
        for (const auto &i : input) {
            if (v == tolower(i)) {
                num_vowels++;
            }
        }
    }

    return num_vowels;
}

// Returns the number of consonants (letters that are not a, e, i, o, u) in a
// string.
// Your algorithm should be case insensitive.
int CPPLib::NumberOfConsonants(std::string &input) {
    if (input.size() == 0) {
        return -1;
    }

    int num_letters = 0;
    for (const auto &n : input) {
        if (isalpha(n) != 0) {
            num_letters++;
        }
    }

    int num_vowels = NumberOfVowels(input);
    
    return (num_letters - num_vowels);
}

// Returns the revers of a string.
// Example input: 'ted', output: 'det'.
// Note: You cannot use any std:: functions.
int CPPLib::Reverse(std::string &input) {
    if (input.size() == 0) {
        return -1;
    }

    std::string tmp_str;

    for (int i = input.size() - 1; i >= 0 ; i--) {
        tmp_str.push_back(input.at(i));
    }

    input.clear();
    input = tmp_str;

    return 0;
}