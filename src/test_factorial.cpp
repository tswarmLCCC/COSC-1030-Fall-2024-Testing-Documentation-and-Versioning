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
   
   cout << "Testing started" << endl;
   
   assert(factorial(0)  == 0);

   // Many more test vectors would be typical...
   
   assert(factorial(0)  == 0);


   cout << "Testing completed" << endl;
   
   return 0;
}





// source.cpp

