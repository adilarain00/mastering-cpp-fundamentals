#include <iostream>
using namespace std;

int main() {
    int count = 0;  

    // Infinite loop using while
    while (true) {
        cout << "This is an infinite loop. Iteration: " << count << endl;
        count++;

        // Break condition
        if (count == 5) {
            cout << "Breaking the loop after 5 iterations." << endl;
            break;  // Exiting the loop
        }
    }

    // Infinite loop using for
    for (;;) {
        cout << "This is another infinite loop." << endl;
        break;  // Exiting the loop immediately after one iteration
    }

    return 0;
}

/*
Explanation:

1. The first loop is an infinite `while` loop that prints the iteration count and stops after 5 iterations using `break`
2. The second loop is an infinite `for` loop that immediately breaks after the first iteration
3. The `break` statement is used to exit both loops based on conditions

Output:

This is an infinite loop. Iteration: 0
This is an infinite loop. Iteration: 1
This is an infinite loop. Iteration: 2
This is an infinite loop. Iteration: 3
This is an infinite loop. Iteration: 4
Breaking the loop after 5 iterations.
This is another infinite loop.
*/
