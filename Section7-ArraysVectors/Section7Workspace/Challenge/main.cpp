// CHALLENGE - SECTION 7

/*
 * Declare 2 empty vectors of ints named vector1 and vector2
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display elements in vector1 using at() and size()
 * 
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display elements in vector2 using at() and size()
 * 
 * Declare empty 2D vector called vector_2d
 * Add vector1 to vector_2d using push_back
 * Add vector2 to vector_2d using push_back
 * 
 * Display elements of vector_2d using at()
 * 
 * Change vector1.at(0) to 1000
 * Display elements in vector_2d using at()
 * 
 * Display elements in vector1
 */

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    
    // Declare 2 empty vectors of integers
	vector <int> vector1;
    vector <int> vector2;
    
    // Add 10 and 20 to vector1 dynamically with push_back()
    vector1.push_back(10);
    vector1.push_back(20);
    
    // Display the elements in vector1 using at() as well as size() 
    cout << "Vector1, index0: " << vector1.at(0) << endl;
    cout << "Vector1, index1: " << vector1.at(1) << endl;
    cout << "Vector1 size is " << vector1.size() << endl;
    
    // Add 100 and 200 to vector2 dynamically using push_back()
    vector2.push_back(100);
    vector2.push_back(200);
    
    // Display elements in vector2 using at() and size()
    cout << "\nVector2, index0: " << vector2.at(0) << endl;
    cout << "Vector2, index1: " << vector2.at(1) << endl;
    cout << "Vector2 size is " << vector2.size() << endl;
    
    // Declare an empty 2D vector 
    vector <vector <int>> vector_2d;
    
    // Add vector1 to vector_2d dynamically using push_back()
    // Do the same with vector2
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    // Display elements in vector_2d using at()
    cout << "\nVector_2d, index 0,0: " << vector_2d.at(0).at(0) << endl;
    cout << "Vector_2d, index 0,1: " << vector_2d.at(0).at(1) << endl;
    cout << "Vector_2d, index 1,0: " << vector_2d.at(1).at(0) << endl;
    cout << "Vector_2d, index 1,1: " << vector_2d.at(1).at(1) << endl;
    cout << "Vector_2d, index 1,1: " << vector_2d.at(1).at(1) << endl;

    // Change vector1.at(0) to 1000
    vector1.at(0) = 1000;

    // Display elements in vector1
    cout << "\nVector1, index0: " << vector1.at(0) << endl;  // is now 1000 instead of 10
    cout << "Vector1, index1: " << vector1.at(1) << endl;
    cout << "Vector1 size is " << vector1.size() << endl;
    
    // Display elements in vector_2d
    cout << "\nVector_2d, index 0,0: " << vector_2d.at(0).at(0) << endl;  // did not change with vector1 index 0 change
    cout << "Vector_2d, index 0,1: " << vector_2d.at(0).at(1) << endl;
    cout << "Vector_2d, index 1,0: " << vector_2d.at(1).at(0) << endl;
    cout << "Vector_2d, index 1,1: " << vector_2d.at(1).at(1) << endl;
    
    return 0;
}
