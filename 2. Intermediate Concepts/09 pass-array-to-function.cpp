#include <iostream>
using namespace std;

void myFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";  // Print each element of the array
    }
}

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};  // Declare and initialize array
    myFunction(myNumbers);  // Pass array to function
    return 0;
}

/*
Explanation:
1. `void myFunction(int myNumbers[5])` - Function accepts an array of size 5.
2. `cout << myNumbers[i] << "\n";` - Prints each element of the array inside the loop.
3. Array passed to function - Array is accessed and printed in the function.

Output:
10
20
30
40
50
*/
