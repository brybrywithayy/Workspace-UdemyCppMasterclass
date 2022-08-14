#include <iostream>

extern int x;   // this is an integer that is called from another file (but that file doesn't exist)

int main() {
    std::cout << "Template"<< std::endl;
    std::cout << x;
    return 0;                                   
}

// Linker error: "undefined reference to 'x' on line 7