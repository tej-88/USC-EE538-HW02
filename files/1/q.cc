#include "q.h"

#include <iostream>
#include <vector>

// Given two separate strings for first and last names, return the full name.
std::string CPPLib::GetFullName(std::string& first_name, std::string& last_name) {
    return first_name + " " + last_name;
}