#include <iostream>
using namespace std;

int main() {
    int age = 18;

    if (age >= 18) {     // Check if age is 18 or more
        cout << "You are eligible to vote." << endl;  // Output
    } else {
        cout << "You are not eligible to vote." << endl;  // Output
    }

    return 0;
}

/*
Explanation:

1. Declares an integer variable 'age' and assigns the value 18
2. Uses an if-else statement to check if age is 18 or greater
3. Prints the appropriate message based on the condition

Output:

You are eligible to vote.
*/
