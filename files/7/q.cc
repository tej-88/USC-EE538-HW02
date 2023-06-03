#include "q.h"

// Write two functions for swapping variables:

// Example :
// Before: x = 10, y = 15
// We call Swap(x,y)
// After: x = 15, y = 10

void CPPLib::SwapByPointer(float *input1, float *input2) {
    float tmp = *input1;
    *input1 = *input2;
    *input2 = tmp;
    return;
}