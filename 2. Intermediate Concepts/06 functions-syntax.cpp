#include <iostream>
using namespace std;

// Function Declaration
void greet() {
    cout << "Hello Adil! Welcome to C++ Functions." << endl; // Function definition
}

// Main function
int main() {
    // Function Call
    greet();
    greet(); // Calling the function again
    greet(); // Calling the function again
    return 0;
}

/*
Explanation:

1. void greet() - This defines a function named `greet` that doesn't return any value (`void`).
2. greet() - This is the function call inside `main()`. It tells the program to execute the code in the `greet` function.
3. void - This specifies that the function does not return any value. If it were `int`, it would return an integer.

Output:
Hello Adil! Welcome to C++ Functions.
Hello Adil! Welcome to C++ Functions.
Hello Adil! Welcome to C++ Functions.
*/
