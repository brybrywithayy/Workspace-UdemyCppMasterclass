// Program will calculate the area of a room, L x W

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    // Always initialize variables to something, usually zero
    int room_length {0};
    int room_width {0};
    
    cout << "Enter the width of the room: ";
    cin >> room_width;
    
    cout << "Enter the length of the room: ";
    cin >> room_length;
    
    cout << "The area of the room is " << room_width * room_length << " square feet." << endl;
    
    return 0;                                   
}