// Section 8 - Arithmetic Operators

/*
 * addition         +
 * subtraction      -
 * multiplication   *
 * division         /
 * modulo           %  (only for ints)
 * 
 * +,-,*,/ all are overloaded and work with multiple types
 */

#include <iostream>

using namespace std;

int main() {

    int num1 {200};
    int num2 {100};
    
//    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    int result {0};
    
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    // integer division means decimal is truncated
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;
    
    // modulo will yield the remainder from division of the operands
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    num1 = 10;
    num2 = 3;
    
    // modulo returns remainder of the division of two operands
    result = num1 % num2;  // 10/3 = 3 remainder 1
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    // order of operations applies to operator arithmetic
    result = num1 * 10 + num2;  // multiplication before addition
    
    // 5/10 as integers will yield 0
    cout << 5/10 << endl;
    
    // 5.0/10.0 as floating-point numbers will yield 0.5
    cout << 5.0/10.0 << endl;
    
    cout << endl;
    return 0;
}