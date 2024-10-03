// test_factorial.cpp
#include <cassert>
#include "header.h"

int main() {
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);

    // ... more tests ...

    return 0;
}
