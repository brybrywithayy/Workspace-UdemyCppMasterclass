#include <iostream>

using namespace std;

int main() {
    
    // declaration and initialization of variables
    int num1 {10};
    int num2 {20};
    
    /* 
     * HOW ASSIGNMENT WORKS in C++
     * 
     * left-hand side = right-hand side
     * 
     * l-value - r-value
     * left side is the location, right side is value
     * 
     * compiler evaluates statement on the right
     * then it assigns the value to the location on the left
     */
     
    // assignment
//    num1 = 100;  // "assign 100 to num1, move 100 to num1, etc"
//    num1 = num2;
    num1 = num2 = 1000;  // goes right to left so both will be 1000
    // note: only chain assignments when all variables will be set to the same value 
    
//    num1 = "Frank";  // will not allow conflicting types
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    cout << endl;
    return 0;
}