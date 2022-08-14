#include <iostream>
#include <climits>
#include <cfloat>

// climits contains min/max for all integer types
// cfloat contains min/max for all floating-points (not imported above)

using namespace std;


int main() {
    
    int char_bits = sizeof(char) * 8;
    int int_bits = sizeof(int) * 8;
    int short_bits = sizeof(short) * 8;
    int long_bits = sizeof(long) * 8;
    int longlong_bits = sizeof(long long) * 8;
    float float_bits = sizeof(float) * 8;
    float double_bits = sizeof(double) * 8;
    float longdouble_bits = sizeof(long double) * 8;
    
    cout << "sizeof information" << endl;
    cout << "===============================" << endl;
    
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    
    cout << "===============================" << endl;
    
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl;
    
    // using values in <climits>
    cout << "===============================" << endl;
    
    cout << "Minimum/Maximum values:" << endl;
    cout << "char: " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "int: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "short: " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "long: " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MIN << " to " << LLONG_MAX << endl;
   
    // sizeof can be used with variable names
    cout << "===============================" << endl;
    
    cout << "sizeof using variable names" << endl;
    
    int age {21};
    cout << "age is " << sizeof(age) << " bytes" << endl;
    // or 
    cout << "age is " << sizeof age << " bytes" << endl;
    
    double wage {22.24};
    cout << "wage is " << sizeof(wage) << " bytes" << endl;
    cout << "wage is " << sizeof wage << " bytes" << endl;
    
    return 0;                                   
}