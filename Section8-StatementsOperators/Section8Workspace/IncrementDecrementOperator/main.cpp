// Section 8

/*
 * Increment operator ++
 * Decrement operator --
 * 
 * Increments or decrements its operand by 1
 * Can be used with integers, floating point types and pointers
 * 
 * 
 * Prefix   ++num
 * Postfix  num++
 * Note: used by themselves, there is no difference
 * When part of larger statements, 
 * ++num increments and then assigns
 * num++ assigns then increments
 * 
 * Note: don't overuse this operator
 * Alert!! Never use it twice on the same variable in the same statement
 * behavior is undefined and thus unpredictable
 */

#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
    
// Example 1 - simple increment
    cout << "Counter: " << counter << endl;  // outputs 10
    
    counter = counter + 1;
    cout << "Counter: " << counter << endl;  // outputs 11
    
    counter++;
    cout << "Counter: " << counter << endl;  // outputs 12
    
    ++counter;
    cout << "Counter: " << counter << endl;  // outputs 13
    
    cout << "__________________\n" << endl;

// Example 2 - Pre-increment
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    
    result = ++counter;  // increments first, then assigns to variable
    // counter = counter + 1
    // result = counter;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "__________________\n" << endl;
    
// Example 3 - Post-increment
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++;  // assigns first, then increments
    // result = counter;
    // counter = counter + 1;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "__________________\n" << endl;
    
// Example 4
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter + 10;
    // counter = counter + 1;
    // result = counter + 10;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "__________________\n" << endl;
    
// Example 5
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++ + 10;
    // result = counter + 10;
    // counter = counter + 1;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    return 0;
}