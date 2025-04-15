#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {                                  // Do-while loop to print numbers 1 to 5
        cout << "Number: " << i << endl;  // Output each number
        i++;                              // Increment counter variable
    } while (i <= 5);                     // Loop condition

    return 0;
}

/*
Explanation:

1. Initializes counter variable 'i' to 1
2. Uses a do-while loop to print numbers 1 to 5
3. Increments 'i' after each iteration

Output:

Number: 1  
Number: 2  
Number: 3  
Number: 4  
Number: 5
*/
