#include <iostream>
#include <cassert>

using namespace std;

// Function to calculate the Fibonacci sequence
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 5) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 

    }
}

// Unit tests
void test_fibonacci() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1);
    assert(fibonacci(3) == 2);
    assert(fibonacci(5) == 5);
    assert(fibonacci(10) == 55);
}

int main() {
    test_fibonacci(); // Run the unit tests

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
