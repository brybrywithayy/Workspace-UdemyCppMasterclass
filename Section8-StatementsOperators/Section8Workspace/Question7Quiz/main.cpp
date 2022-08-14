#include <iostream>

using namespace std;

int main() {
    
    // Question 7
    int x = 10, y = 3, z = 6;
    cout << (x == y) << " ";  // 0
    cout << (z <= x) << " ";  // 1
    cout << (y != z) << " ";  // 1
    cout << (x > y && z < x) << " ";  // 1
    cout << (y < x && z < x) << " ";  // 1
    cout << (x < y || z < 0) << " ";  // 0
    
    // Question 8
    cout << "\n_____________________" << endl;
    int amount = 100;
    amount += (amount * 2);
    cout << amount << endl;
    
    // Question 9
    x = y = z = 0;  // reset
    cout << "\n_____________________" << endl;
    
    x = 5;
    y = -2;
    z = 2;
    cout << (x + y * z <= x + z * z - x) << endl;
    
    // Question 10
    cout << "\n_____________________" << endl;
    x = y = z = 0;  // reset
    
    double a = 100;
    int b = 12;
    x = b % 3;
    static_cast<double>(y);
    y = a / b;
    z = a / b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    
    
    return 0;
}