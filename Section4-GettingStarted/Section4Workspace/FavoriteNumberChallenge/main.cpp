// Instructions:
// Create program that asks user for favorite number between 1 and 100
// then read the number from the console input

#include <iostream>

int main() {
    
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 and 100:";
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    
    return 0;
}