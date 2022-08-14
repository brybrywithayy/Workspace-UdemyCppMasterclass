// Section 8 - Mixed Type Expression

/*
 * Ask the user to enter 3 integers
 * Calculate the sum of the integers
 * Then calculate the average of the 3 integers
 * 
 * Display all 3 integers entered, the sum of the 3 ints
 * and the average of the 3 integers
 */

#include <iostream>

using namespace std;

int main() {
    
    int num1 {}, num2 {}, num3 {};
    int total {};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double>(total) / count;  // casting an int to double here to force the compiler to do double division
    // NOTE: old C style cast looks like: average = (double)total / count;
    // static_cast<>() will check to see if the cast is possible first
    
    
    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is " << total << endl;
    cout << "The average of the numbers is " << average << endl;
    
	return 0;
}