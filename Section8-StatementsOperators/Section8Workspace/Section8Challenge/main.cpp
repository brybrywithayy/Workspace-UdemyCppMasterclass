// Section 8 CHALLENGE

/*
 * Write a program that asks the user to enter the following:
 * int representing cents
 * assume cents is <= 0
 * Display how to provide change to the user
 * 
 * Conversions
 * 1 dollar = 100 cents
 * 1 quarter = 25 cents
 * 1 dime = 10 cents
 * 1 nickel = 5 cents
 * 1 penny = 1 cent
 */

#include <iostream>

using namespace std;

int main() {
    
    int cents {};
    int num_dollars {}, num_quarters {}, num_dimes {}, num_nickels {}, num_pennies {};
    
    const int penny_value {1};
    const int nickel_value {5};
    const int dime_value {10};
    const int quarter_value {25};
    const int dollar_value {100};
    
    cout << "Enter an amount in cents: ";
    cin >> cents;  // probably not best idea to use the original
    
    // calc number of each unit of measurement (convert and count)
    // then remove that base number from user entry (remove preconversion from original)
    
    num_dollars = (cents / dollar_value);
    cents -= dollar_value * num_dollars;
    
    num_quarters = (cents / quarter_value);
    cents -= quarter_value * num_quarters;
    
    num_dimes = (cents / dime_value);
    cents -= dime_value * num_dimes;
    
    num_nickels = (cents / nickel_value);
    cents -= nickel_value * num_nickels;
    
    num_pennies = (cents / penny_value);
    cents -= penny_value * num_pennies;
    
    cout << "You can provide change for this as follows: " << endl;
    cout << "Number of dollars: " << num_dollars << endl;
    cout << "Number of quarters: " << num_quarters << endl;
    cout << "Number of dimes: " << num_dimes << endl;
    cout << "Number of nickels: " << num_nickels << endl;
    cout << "Number of pennies: " << num_pennies << endl;
    cout << "\nremaining cents should = 0: " << cents << endl;


    /********************
     * FRANK's SOLUTION *
     ********************/
/*     
    // conversion values in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {};
    
    // Solution 1 - without modulo
    
    cout << "Enter an amount in cents: ";
    cin >> change_amount;
    
    int balance {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);  // change amount is dumped into balance here
    
    quarters = balance / quarter_value;
    balance = change_amount - (quarters * quarter_value);
    
    dimes = balance / dime_value;
    balance = change_amount - (dimes * dime_value);
    
    nickels = balance / nickel_value;
    balance = change_amount - (nickels * nickel_value);
    
    pennies = balance;
    
    cout << "You can provide change for this as follows: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << balance << endl;
    
    // Frank's Solution using MODULO operator
    cout << "----------------------------------" << endl;
    cout << "Solution using the modulo operator" << endl;
    cout << "----------------------------------" << endl;
    
    balance = dollars = quarters = dimes = nickels = pennies = 0;  // reset everything
    
    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;
    
    quarters = balance / quarter_value;
    balance %= quarter_value;
    
    dimes = balance / dime_value;
    balance %= dime_value;
    
    nickels = balance / nickel_value;
    balance %= nickel_value;
    
    pennies = balance;
    
    cout << "\nChange provided using modulo" << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
*/    
    return 0;
}