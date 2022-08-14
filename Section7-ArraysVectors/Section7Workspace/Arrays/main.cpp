// Arrays

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    char vowels[] {'a','e','i','o','u'};  // compiler will decide how many elements based on init values
    cout << "\nThe first vowel is " << vowels[0] << endl;  // vowels sub 0 is the first element
    cout << "The last vowel is " << vowels[4] << endl;  // vowels sub 4 is the last value
    
//    cin >> vowels[5];  // may cause a crash because value is out of bounds
    
    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7;  // set first element to 100.7
    
    cout << "\nNow, the first temp is " << hi_temps[0] << endl;
    
//    int test_scores [5];  // created an array of 5 integers, but they are not initialized
                            // Whatever values are already in these memory locations are still there
//    int test_scores [5] {0};  // instead, always init to zero
    
    int test_scores [5] {100,90,80,70,60};  // or to specific values
 
    cout << "\nThe first score at index 0: " << test_scores[0] << endl;
    cout << "The second score at index 1: " << test_scores[1] << endl;
    cout << "The third score at index 2: " << test_scores[2] << endl;
    cout << "The fourth score at index 3: " << test_scores[3] << endl;
    cout << "The fifth score at index 4: " << test_scores[4] << endl;
    
    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    cout << "\nNotice what the value of the array name is: " << test_scores << endl;  // no subscript on the call to the array
    // calling the name of the array without subscripts will output the memory address of the array
    // array_name[0] at the specified address '1000'
    // array_name[1] is at 1004 - because its an int array and an int is 4 bytes
    // array_name[2] is at 1008
    // array_name[3] is at 1012
    // array_name[4] is at 1016
    // array_name[5] is out of bounds but could return whatever is at memory address 1020
    
    return 0;
}