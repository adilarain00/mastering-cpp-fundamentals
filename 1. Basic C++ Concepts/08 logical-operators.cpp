#include <iostream>
using namespace std;

int main() {
    bool x = true, y = false;  // Boolean variable initialization

    cout << "Logical Operations:" << endl;

    // Performing and displaying logical operations
    cout << "x && y: " << (x && y) << endl;  // AND
    cout << "x || y: " << (x || y) << endl;  // OR
    cout << "!x: " << (!x) << endl;          // NOT

    return 0;
}

/*
Explanation:

1. &&    Logical and Returns true if both statements are true  x < 5 &&  x < 10  
2. ||    Logical or  Returns true if one of the statements is true   x < 5 || x < 4 
3. !     Logical not Reverse the result, returns false if the result is true  !(x < 5 && x < 10)

Output:
Logical Operations:
x && y: 0
x || y: 1
!x: 0
*/
