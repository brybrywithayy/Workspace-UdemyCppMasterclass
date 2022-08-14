// Section 9 - Coding Exercise IF ELSE

/*
    Use an if/else statement to decide if someone can drive
    Assume that 16 and older can drive
    Display "Yes - you can drive!" if the person is eligible
    Display "Sorry, come back in __ years" if the person is not
 */

#include <iostream>
using namespace std;

void can_you_drive(int age) {
    
    // my code below
    
    if (age >= 16)
        cout << "Yes - you can drive!";
    else {
        int diff {16 - age};
        cout << "Sorry, come back in " << diff << " years";
    }
}
