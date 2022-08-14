// Coding Exercise - Range-based For Loop

/*
    Use range-based for loop to iterate through a given vector of ints
    and determine how many elements in the vector are evenly divisible by 3 or 5
    
    Store final result in int count
    
    Vector is provided as vec
    
 */
 
#include <vector>
using namespace std;

int count_divisible() {
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,27,30,50,55,56,58,100,200,300,400,500,600,700};
    
    // my code below
    int count {};    
    
    for (auto num: vec) {
        if (num % 3 == 0)
            count++;
        else if (num % 5 == 0)
            count++;
    }
    return count;
}
