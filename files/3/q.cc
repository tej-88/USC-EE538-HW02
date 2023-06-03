#include "q.h"
#include <limits.h>

// Given two integers, returns the result of the operation based on the given
// operator.
float CPPLib::Calculate(int a, int b, Operation operation) {
    float result;

    switch(operation) {
        case Operation::kAdd :
            result = a + b;
            break;

        case Operation::kSubtract :
            result = a - b;
            break;

        case Operation::kMultiplication :
            result = a * b;
            break;
        
        case Operation::kDivision :
            result = ((float) a) / b;
            break;

        case Operation::kBitwise_AND :
            result = a & b;
            break;

        case Operation::kBitwise_OR :
            result = a | b;
            break;

        case Operation::kBitwise_XOR :
            result = a ^ b;
            break;

        case Operation::kShift_left :
            result = a << b;
            break;

        case Operation::kShift_right :
            result = a >> b;
            break;
    }

    return result;
}