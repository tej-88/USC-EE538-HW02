#include <vector>

class CPPLib {
 public:
  // Write a function that takes a vector of positive integers as input. The
  // output is the same vector where all duplicates are removed. Note that the
  // output is the same vector means the function's return type should be void
  // and do the modifications on the input vector. Example: before: v=[1, 2, 2,
  // 4], after : v=[1, 2, 4] Solve this for the following cases: You cannot use
  // std::set
  void UniqueVectorNotBySet(std::vector<int> &input);
  // You can use std::set
  void UniqueVectorBySet(std::vector<int> &input);

  // Write a function that takes two vectors v1 and v2 and returns a new vector
  // that is the intersection of the values in v1 and v2. All the values in
  // return vector should be unique. Example: input: v1={1, 2, 2, 3}, v2={3, 4,
  // 4, 5}, output = {1, 2, 3, 4, 5}
  std::vector<int> IntersectVectors(std::vector<int> &input1,
                                    std::vector<int> &input2);
};
