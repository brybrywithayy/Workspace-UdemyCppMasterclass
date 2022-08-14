#include <iostream>

using namespace std;

int main() {
	
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1 {}, num2 {};
    
//    cout << boolalpha;  // will display true/false instead of 1/0 for boolean values

//    cout << "Enter two integers separated by a space: ";
//    cin >> num1 >> num2;
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
    // Can also compare characters
//    char char1 {}, char2{};
//    cout << "Enter two characters separated by a space: ";
//    cin >> char1 >> char2;
//    equal_result = (char1 == char2);
//    not_equal_result = (char1 != char2);
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
    // Example with doubles
    double double1 {}, double2 {};
//    cout << "Enter two doubles separated by a space: ";
//    cin >> double1 >> double2;
//    equal_result = (double1 == double2);
//    not_equal_result = (double1 != double2);
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;

    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);  // num1 will be promoted to double
    not_equal_result = (num1 != double1);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
    /* Note about floating point numbers:
     * the compiler will see 12.0 and 11.999999999999999999999999999999999
     * as equivalent because they are saved as approximations
     * (limited by the bytes available for the data type)
     * 
     * For applications (science, medical, finance) that require
     * greater precision, use dedicated libraries instead of primitives
     */
    
    return 0;
}
