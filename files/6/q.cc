#include <iostream>
#include <vector>

// Returns element at i index.
int ReturnElementI(std::vector<int> &input, int i)
{
  if ((i >= input.size()) || (i < 0))
  {
    return -1;
  }
  return input[i];
}

// - What is wrong with each piece of code below?
// - For each case modify the code so that the issue is fixed:
int main()
{
  // Question 1:
  {
    std::vector<int> elements;

    // Number of values to read from the input
    int number_of_items;
    std::cin >> number_of_items;

    // Reading elements from the input.
    for (int i = 0; i < number_of_items; i++)
    {
      int element;
      std::cin >> element;
      elements.push_back(element);
    }
  }

  // Question 2:
  {
    int *a = new int;
    std::cin >> *a;
    (*a)++;
    std::cout << "(*a): " << *a << std::endl;
    delete a;
  }

  // Question 3:
  {
    int *a = new int;
    int *b = new int;
    std::cin >> (*a);
    std::cin >> (*b);

    std::cout << "(*a) + (*b): " << (*a) + (*b) << std::endl;
    delete a;
    delete b;
  }

  // Question 4:
  {
    int *a = new int;
    int *b = new int;
    std::cin >> (*a);
    std::cin >> (*b);
    std::cout << "(*a) + (*b): " << (*a) + (*b) << std::endl;

    (*a)++;
    (*b)++;
    std::cin >> (*a);
    std::cin >> (*b);
    std::cout << "(*a) + (*b): " << (*a) + (*b) << std::endl;
    delete a;
    delete b;
  }

  // Question 5:
  {
    for (int i = 0; i < 10; i++)
    {
      std::cout << "i: " << i << std::endl;
      i = i - 1;
      std::cout << "i: " << i << std::endl;
      i = i + 1;
    }
  }

  return 0;
}