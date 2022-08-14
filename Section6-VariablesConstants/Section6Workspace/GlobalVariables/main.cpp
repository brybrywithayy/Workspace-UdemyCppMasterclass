// GLOBAL AND LOCAL VARIABLES - SCOPE

#include <iostream>
using std::cout;
using std::endl;

// int age {18};  // global variable, can be changed from anywhere in the program

int main() {
    
    int age {18};  // local variable available only to the main() function
    
    cout << age << endl;
    
    return 0;                                   
}