# Testing, Documentation, and Versioning

## Understanding Assert Statements

Assert statements are a powerful tool in C++ for debugging and testing. They are used to check conditions at runtime and, if the condition is false, terminate the program with an error message. This can be helpful for catching errors early in the development process.

Project Structure

Directories can be a great way to not only organize your code, but also help keep the logistics of your project in good order. 
This sample structure gives us nice places for our code (src), code templates (include), tests, and documentation (doc).
This can help compartmentalize your work and keep only the aspects that your working on in your view at any given time!

```Sample Directory Structure
project_name/
├── include/
│   ├── header1.h
│   ├── header2.h
│   └── ...
├── src/
│   ├── main.cpp
│   ├── source1.cpp
│   └── ...
├── tests/
│   ├── test_header1.cpp
│   ├── test_header2.cpp
│   └── ...
├── docs/
│   ├── module1.txt
│   ├── usage.txt
│   └── ...
```

include/: Contains header files with declarations for classes, functions, and constants.
src/: Contains source files with the implementations of functions and classes.
tests/: Contains test files using assert statements to verify the correctness of the code.

## Using Assert Statements

Include the cassert header: This header provides the assert macro.
Place assert statements in appropriate locations: Typically, you'll want to test the output of functions or the values of variables after certain operations.
Write meaningful error messages: If an assertion fails, provide a clear and informative message that helps identify the problem.
Example:


```C++
// header.h
int factorial(int n);

// source.cpp
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

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
```

Tips for Effective Testing

Test boundary cases: Consider inputs at the extremes of the valid range.

Test error conditions: Check how your code handles invalid inputs or unexpected situations.

Use a testing framework: While not strictly necessary for this level, consider using a testing framework like Google Test or Catch2 for more advanced features and organization.

Write clear and concise tests: Make it easy for others to understand the purpose of each test.

## Contributing

Please feel free to contact me at my work email - tswarm@lccc.wy.edu

## Acknowledgments


