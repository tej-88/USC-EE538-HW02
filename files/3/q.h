
// Define a new C++ enum type called Operation that has members for add,
// subtract, division, multiplication, bitwise AND, bitwise OR, bitwise XOR, shift
// right, and shift left:
enum class Operation
{
  kSubtract,
  kDivision,
  kMultiplication,
  kBitwise_AND,
  kBitwise_OR,
  kBitwise_XOR,
  kShift_right,
  kShift_left,
  kAdd
};

class CPPLib
{
public:
  // Given two integers, returns the result of the operation based on the given
  // operator.
  float Calculate(int a, int b, Operation operation);
};
