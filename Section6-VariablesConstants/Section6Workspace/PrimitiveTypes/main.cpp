#include <iostream>

using namespace std;

int main() {
    
    /*
     * CHARACTER DATATYPE
     */
     
    char middle_initial {'D'};  // single quotes used for chars, double quotes for strings
    cout << "My middle initial is " << middle_initial << endl;
    
    /*
     * INTEGER TYPES
     */
     
    unsigned short int exam_score {55};  // same as <unsigned short exam_score {55};>
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represented {65};  // will be signed by default
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
    
    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;
    
    long long people_on_earth {7'600'000'000};  // C++14 allows ' for readability
    // Note: if we use C style assignment initialization instead of the above list initialization, we get an overflow instead of a compiler error
    cout << "There are about " << people_on_earth << " people on Earth" << endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to Alpha Centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    /*
     * FLOATING POINT TYPES
     */
     
    float car_payment {401.23};  // if this value is stored in an int, the decimal will be dropped (not rounded)
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.14159};  // hardcoded, short version of PI
    cout << "PI is " << pi << endl;
    
    long double large_amount {2.7e120};  // will print in its current notation
    cout << large_amount << " is a very big number" << endl;
    
    /*
     * BOOLEAN TYPE
     */
     
    bool game_over {false};  // will print 0 instead of "false" - would do 1 instead of true
    cout << "The value of game over is " << game_over << endl;
    
    /*
     * OVERFLOW EXAMPLE
     */
     
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};  // will read -15488 - using list initialization will yield a compiler warning over this
    
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
    
    return 0;                                   
}