#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 10;

    // Using ternary operator to compare values
    // Ternary operator for comparison
    string result = (a > b) ? "a is greater than b" : "a is not greater than b"; 
    cout << result << endl;  // Output comparison result

    // Using ternary operator for even/odd check
    // Ternary operator for even/odd check
    string parity = (a % 2 == 0) ? "even" : "odd"; 
    cout << "a is " << parity << endl;  // Output even/odd result

    return 0;
}

/*
Explanation:

1. Initializes two integer variables 'a' and 'b' with values 15 and 10, respectively
2. Uses a ternary operator to check if 'a' is greater than 'b' and outputs the result
3. Uses another ternary operator to check if 'a' is even or odd and outputs the result

Output:
a is greater than b
a is odd
*/
