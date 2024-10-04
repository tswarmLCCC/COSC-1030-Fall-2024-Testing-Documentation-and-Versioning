// factorial_working.cpp

#include <iostream>
using namespace std;
#include <cassert>


//function to calculate the factorial of a number, this could be moved to another file via headers!
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

//test harness to test the factorial function
int main() {
   
   cout << "Factorial Working :: testing started" << endl;
   
   assert(factorial(1)  == 1);
   assert(factorial(6)  == 720);

   cout << "Factorial Working :: testing succeeded" << endl;

   
   return 0;
}



