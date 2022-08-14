// CHALLENGE - SECTION 6

/*
 * Frank's Carpet Cleaning Service
 * Charges:
 *      25 per small room
 *      35 per large room
 * Sales tax rate is 6%
 * Estimates valid for 30 days
 * 
 * Prompt the user for number of small and large rooms to be cleaned
 * and provide estimate such as:
 * 
 * Estimate for carpet cleaning service
 * Number of small rooms: #
 * Number of large rooms: #
 * Price per small room: #
 * Price per large room: #
 * Cost: $$
 * Tax: $$
 * =========================
 * Total estimate: $$
 * This estimate is valid for 30 days
 */
 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms do you need cleaned?" << endl;
    
    int number_small_rooms {0};
    cin >> number_small_rooms;
    
    cout << "\nHow many large rooms do you need cleaned?";
    
    int number_large_rooms {0};
    cin >> number_large_rooms;
    
    const double price_small_room {25.0};
    const double price_large_room {35.0};
    
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "\nEstimate for cleaning services" << endl;
    cout << "Number of small rooms: " << number_small_rooms << endl;
    cout << "Number of large rooms: " << number_large_rooms << endl;
    cout << "Price per small rooms: " << price_small_room << endl;
    cout << "Price per large rooms: " << price_large_room << endl;
    
//    double cost_small_rooms {0};
//    double cost_large_rooms {0};
//    cost_small_rooms = price_small_room * number_small_rooms;
//    cost_large_rooms = price_large_room * number_large_rooms;
//    double total_tax_cost {0};
//    total_tax_cost = (cost_small_rooms * sales_tax) + (cost_large_rooms * sales_tax);
    
    cout << "Cost: $"
         << (price_small_room * number_small_rooms) +
            (price_large_room * number_large_rooms)
         << endl;
         
    cout << "Tax: $"
         << ((price_small_room * number_small_rooms) +
            (price_large_room * number_large_rooms)) * sales_tax
         << endl;
         
    cout << "================================" << endl;
    cout << "Total estimate: $" 
         << ((price_small_room * number_small_rooms) +
            (price_large_room * number_large_rooms)) +
            (((price_small_room * number_small_rooms) +
            (price_large_room * number_large_rooms)) * sales_tax)
         << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
    
    return 0;
}