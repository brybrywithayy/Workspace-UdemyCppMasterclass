// Program will ask user for their favorite number and then agree that it is the program's favorite number as well

#include <iostream>     // #directive imports library iostream

int main() {            // driver function for the program - ALL CPP Programs have only ONE main

    int favorite_number;                                            // variable to hold user input
    std::cout << "Enter your favorite number between 1 and 100:";   // standard library:: c output stream then << (insertion operator) to put the string-literal into the stream
    std::cin >> favorite_number;                                    // std-lib:: c input stream with insertion operator >> to put user string and save to variable
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;    // std-lib:: endline flushes stream buffer
    return 0;                                                       // main has to return an integer because of its return type
}