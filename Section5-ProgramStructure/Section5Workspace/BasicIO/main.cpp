#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
//    cout << "Hello World!" << endl;  // prints Hello World!
    
//    cout << "Hello";
//    cout << "World" << endl;      // prints HelloWorld
    
//    cout << "Hello world!" << endl;         // Hello world!
//    cout << "Hello" << " world!" << endl;   // Hello world!
//    cout << "Hello" << " world!\n";         // Hello world!
//    cout << "Hello\nOut\nThere\n";          // Hello \n Out \n There
    
    int num1;
    int num2;
    double num3;
//    
//    cout << "Enter an integer: ";           // prints prompt
//    cin >> num1;                            // inserts characters from buffer
//    cout << "You entered: " << num1 << endl; // prints from variable
    
    
//    cout << "Enter a first integer: ";  // note, if user enters a number and another number separated by a space, the buffer will store both sequentially
//    cin >> num1;
//    
//    cout << "Enter a second integer: ";
//    cin >> num2;
//    
//    cout << "You entered " << num1 << " and " << num2 << endl;
    
//    cout << "Enter 2 integers separated by a space: ";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;
    
//    cout << "Enter a double: ";
//    cin >> num3;
//    cout << "You entered " << num3 << endl;

    cout << "Enter an integer: ";
    cin >> num1;
    
    cout << "Enter a double: ";
    cin >> num3;
    
    cout << "The integer is: " << num1 << endl;
    cout << "and the double is " << num3 << endl;
    
    // if the user enters a decimal for the integer in the first prompt
    // the whole number will used as the integer
    // then the buffer will give the next variable the decimal portion of the first number (since it is a double)
    
    // if the user goes crazy and enters a string or char
    // some weird values will get saved to the variables
    
    return 0;
}