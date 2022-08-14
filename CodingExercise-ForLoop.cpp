// Coding Exercise - FOR LOOP, Section 9

/*
    Write a for loop to calculate the sum of odd integers from 1 to 15 inclusive
    Store the final result in int sum
 */

int calculate_sum() {

    // my code below
    
    int sum {};
    
    for (int i {1}; i <= 15; ++i) {
        if (i % 2 != 0)
            sum += i;
    }
    
    return sum;
}
