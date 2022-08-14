// Section 9 - Coding Exercise Switch Statement - Day of the Week

/*
    Write a switch statement that displays the name of the day of the week
    given the day code.
    
    Use int variable day_code for this - declared in a separate class
    
    Given the following day codes, your program should display the day of the week
    using a cout statement. (don't use \n or endl)
        Sunday (0), Monday (1), Tues (2), Wed (3), Thurs(4), Fri(5), Sat(6) Error(any other)
        
 */
 
#include <iostream>
using namespace std;

void display_day(int day_code) {

    // my code below
    
    switch (day_code) {
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            cout << "Error - illegal day code";
    }
