# Testing, Documentation, and Versioning

## Project Structure

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

+ src/: Contains source files with the implementations of functions and classes.
+ tests/: Contains test files using assert statements to verify the correctness of the code.
+ docs/: Contains documentation about installation, usage, and contributing.
+ include/: Contains header files with declarations for classes, functions, and constants.  Note: We haven't studied object linking yet, but they are a great way to seperate your tests and I encourage to think about doing so when we cover that later in the program!

## Understanding Assert Statements

Assert statements are a powerful tool in C++ for debugging and testing. They are used to check conditions at runtime and, if the condition is false, terminate the program with an error message. This can be helpful for catching errors early in the development process.

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

Markdown is a great formatting langauge to learn for documenation, and almost every modern stack supports it (including GitHub!).  A great getting started guide on markdown can be found at https://www.markdownguide.org/basic-syntax/

## Understanding Version Control

Version control systems (VCS) are essential tools for managing changes to your code over time. They allow you to:

Track changes: Keep a history of modifications made to your files.
Collaborate: Work on projects with others without conflicts.
Rollback: Revert to previous versions of your code if needed.

### Popular Version control systems (VCS)

+ Git: The most widely used VCS, known for its distributed nature and flexibility.
+ SVN (Subversion): A centralized VCS that is still used in many projects.
+ Mercurial: Another distributed VCS with a focus on simplicity.

### Basic Concepts

+ Repository: A central location where your code is stored.
+ Commit: A snapshot of your project at a specific point in time.
+ Branch: A parallel line of development, allowing you to work on different features or bug fixes independently.
+ Merge: Combining changes from different branches into a single branch.

### Using a Version control systems (VCS)

+ Initialize a repository: Create a new repository for your project.
+ Stage changes: Add files to the staging area, indicating that you want to commit them.
+ Commit changes: Create a new commit, recording the staged changes.
+ Push changes: Send your commits to a remote repository (if applicable).
+ Pull changes: Retrieve changes from a remote repository.

### Best Practices

+ Commit frequently: Make small, focused commits to keep your history clean.
+ Write descriptive commit messages: Explain the changes made in each commit.
+ Use branches effectively: Create branches for different features or bug fixes.
+ Resolve conflicts carefully: If multiple developers make changes to the same file, you may need to resolve conflicts.
+ Back up your repository: Regularly back up your remote repository to prevent data loss.

### Example (Using Git):

Initialize a new Git repository

```
git init
```

Stage all changes

```
git add .
```

Commit the changes

```
git commit -m "Initial commit"
```

Commit the changes

```
git commit -m "Initial commit"
```

Push changes to a remote repository

```
git remote add origin https://github.com/your-username/your-project.git
git push -u origin main
```

By understanding and using version control effectively, you can improve the efficiency, collaboration, and maintainability of your software development projects.

## Makefiles
A Makefile is a configuration file used by the make utility to automate the build process of software. It specifies dependencies between files and the commands needed to update them. This can be particularly useful for large projects with many source files and dependencies.

Basic Structure

A Makefile typically consists of rules, variables, and comments. A rule defines a target (e.g., an executable or object file) and the commands needed to create it. Variables can be used to store values that are used throughout the Makefile.

Example Makefile

Makefile
# Variables
CC = g++
CFLAGS = -Wall -g

# Rules
main: main.o hello.o
    $(CC) $(CFLAGS) main.o hello.o -o main

main.o: main.cpp
    $(CC) $(CFLAGS) -c main.cpp

hello.o: hello.cpp
    $(CC) $(CFLAGS) -c hello.cpp
Use code with caution.

Explanation:

Variables:
CC: Specifies the C++ compiler (e.g., g++).
CFLAGS: Sets compiler flags for warnings and debugging.
Rules:
The main rule specifies that the main executable depends on the main.o and hello.o object files. The command to create main is $(CC) $(CFLAGS) main.o hello.o -o main.
The main.o and hello.o rules specify that these object files depend on their respective source files (main.cpp and hello.cpp). The command to create an object file is $(CC) $(CFLAGS) -c <source_file>.
How Make Works

When you run make in your terminal, it examines the Makefile and determines which targets need to be updated based on their dependencies and modification times. If a target is out of date, the corresponding commands are executed to rebuild it.

Common Uses of Makefiles

Building complex projects: Makefiles can handle projects with many source files and dependencies.
Automating tasks: You can define rules to automate tasks like cleaning up temporary files or running tests.
Managing dependencies: Makefiles can help you keep track of dependencies between files and ensure that the correct files are rebuilt when necessary.
Cross-platform development: Makefiles can be used to create build environments for different operating systems.

### Useful resources

https://www.youtube.com/watch?v=zeEMISsjO38

https://makefiletutorial.com/ 

## Contributing

Please feel free to contact me at my work email - tswarm@lccc.wy.edu

