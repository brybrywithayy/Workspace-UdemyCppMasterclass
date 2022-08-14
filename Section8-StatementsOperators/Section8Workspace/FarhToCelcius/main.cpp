#include <iostream>

using namespace std;

int main() {
    
    cout << "Enter degrees in Fahrenheit to convert to Celcius: ";
    
    double fahrenheit {0.0};
    
    cin >> fahrenheit;
    
    double celcius = (fahrenheit - 32) / 1.8;
    
    cout << fahrenheit << " F is " << celcius << " Celcius" << endl;
    
    return 0;
}