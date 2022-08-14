// Section 9
// Nested Loops!
/*
    Sum of the Product of all Pairs of Vector Elements
    
    Given a vector of integers named vec (which is provided),
    find the sum of all products of all pairs of vector elements
    
    Store the final product in int result
    
    If the vector is empty or has only 1 element, then result = 0
    
 */
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {

    // my code below
    
    int result {};
    
    for (unsigned i {0}; i < vec.size(); ++i) {     // compare unsigned ints, iterate through vector size
        for (unsigned j {i+1}; j < vec.size(); ++j) {
            result += vec.at(i) * vec.at(j);
        }
    }
    return result;
}
