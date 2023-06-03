#include <iostream>
#include <list>
#include <set>
#include <vector>

class CPPLib {
 public:
  // Given two separate strings for first and last names, return the full name.
  std::string GetFullName(std::string& first_name, std::string& last_name);

  // Given a string and a list of characters, find how many times any of those
  // characters appeared in the input string. Make the comparison case
  // insensitive. Example: Input: "This is a test", characters = {'t','h'}
  // Output: 4

  // YOU CANNOT USE ANY LIBRARY FUNCTIONS FROM std::
  int CountCharacters(std::string& input, std::vector<char> characters);
};
