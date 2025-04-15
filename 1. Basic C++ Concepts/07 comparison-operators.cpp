#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Comparison Operations:" << endl;

    // Performing and displaying comparison operations
    cout << "a == b: " << (a == b) << endl;  // Equal to
    cout << "a != b: " << (a != b) << endl;  // Not equal to
    cout << "a < b: " << (a < b) << endl;    // Less than
    cout << "a > b: " << (a > b) << endl;    // Greater than
    cout << "a <= b: " << (a <= b) << endl;  // Less than or equal to
    cout << "a >= b: " << (a >= b) << endl;  // Greater than or equal to

    return 0;
}

/*
Explanation:

Operators     Name                       Example
    ==      Equal to                     x == y  
    !=      Not equal                    x != y  
    >       Greater than                 x > y   
    <       Less than                    x < y   
    >=      Greater than or equal to     x >= y  
    <=      Less than or equal to        x <= y

Output:
Comparison Operations:
a == b: 0
a != b: 1
a < b: 0
a > b: 1
a <= b: 0
a >= b: 1
*/
