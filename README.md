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

### Using Assert Statements

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

### Tips for Effective Testing

Test boundary cases: Consider inputs at the extremes of the valid range.

Test error conditions: Check how your code handles invalid inputs or unexpected situations.

Use a testing framework: While not strictly necessary for this level, consider using a testing framework like Google Test or Catch2 for more advanced features and organization.

Write clear and concise tests: Make it easy for others to understand the purpose of each test.


## Understanding the Importance of Documentation

Documentation is a crucial aspect of software development. It helps:

Improve code readability: Clear and concise documentation makes it easier for others (and your future self) to understand your code.
Reduce maintenance costs: Well-documented code is easier to modify and update.
Enhance collaboration: Documentation fosters better communication among team members.
In-Code Documentation

Comments:

Use comments to explain the purpose of functions, classes, and variables.
Avoid excessive comments that duplicate the code's meaning.
Use consistent formatting and indentation for comments.
Naming conventions:

Choose meaningful names for variables, functions, and classes.
Follow consistent naming conventions (e.g., camelCase for variables, PascalCase for classes).
Docstrings:

Use docstrings to provide detailed descriptions of functions, classes, and modules.
Docstrings can be used by tools to generate documentation automatically.
Example:

C++
/**
 * Calculates the factorial of a given number.
 *
 * @param n The number to calculate the factorial of.
 * @return The factorial of n.
 */
int factorial(int n) {
    // ... implementation ...
}

### External Documentation

README files:

Provide an overview of the project, its purpose, and how to use it.
Include instructions for installation, usage, and contributing.
User manuals:

Create detailed guides for users, explaining how to interact with the software.
API documentation:

Document the public interface of your code, including classes, functions, and their parameters.
Tips for Effective Documentation

Be consistent: Use a consistent style and format throughout your project.
Write clearly and concisely: Avoid jargon and technical terms that might confuse readers.
Stay up-to-date: Update your documentation as your code evolves.
Use tools: Consider using tools like Doxygen to generate documentation automatically from your code's comments.

## Contributing

Please feel free to contact me at my work email - tswarm@lccc.wy.edu

