// source.cpp

#include <iostream>
using namespace std;
#include <cassert>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int main() {
   
   cout << "Testing started" << endl;
   

   assert(factorial(1)  == 1);
   assert(factorial(6)  == 720);

   
   return 0;
}



