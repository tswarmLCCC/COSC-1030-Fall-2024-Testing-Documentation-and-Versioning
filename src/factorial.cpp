#include <iostream>
#include <cassert>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
    return 0;
}

int main() {
   
   int arg;
   cout << "Input a number!:" << endl;
   cin >> arg;
   //assert(factorial(1)  == 1);
   cout <<  "Factorial " << arg << " is " << factorial(arg) << endl;

   return 0;
}





// source.cpp

