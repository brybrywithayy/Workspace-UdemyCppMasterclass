// Coding Exercise - While Loop, Section 9

/*
   Given vector of ints, determine how many ints are present before hitting -99
   Note: -99 may not be in the vector
   If it isn't in the vector, the result should equal the number of elements
   in the vector
   
   Store final result in int count.
   
   Use vec to reference the vectors which are implemented in another class
 */
 
 /*
    Pseudocode:
    
    variable CountOfIntegersInVector = 0
    variable vectorIndexPosition = 0  // increment this to count the index pos
    
    while count < sizeOfVector || valueAtVectorIndex != -99
        increment count_of_ints
        increment current
    
  */
#include <iostream>
#include <vector>

using namespace std;

int count_numbers(const vector<int> &vec) {

    // my code below
    int count {};
    int vector_index{};
    
    while (vector_index < vec.size() && vec.at(vector_index) != -99) {
        ++count;
        ++vector_index;
    }
    
    return count;
}
