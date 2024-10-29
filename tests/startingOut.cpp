// factorial_working.cpp

#include <iostream>
using namespace std;
#include <cassert>


//function to calculate the factorial of a number, this could be moved to another file via headers!
int newFunction(int n) {
    return n * n * 3;
}

//test harness to test the factorial function
int main() {
   
    cout << "Cubic Working :: testing started" << endl;
    
    assert(newFunction(2)  == 8);
    
    cout << "Cubic Working :: testing succeeded" << endl;

   
   return 0;
}



