#include <iostream>
using namespace std;

// Function Declaration with parameters
void greet(string name, int age = 20) { // default value for age is 20
    cout << "Hello " << name << "! You are " << age << " years old." << endl;
}

// Main function
int main() {
    // Function call with arguments
    greet("Adil", 20);  // Passing "Adil" and 20 as parameters
    greet("Adeel", 25);  // Passing "Adeel" and 25 as parameters
    return 0;
}

/*
Explanation:

1. void greet(string name, int age) - This function is declared to take two parameters: a `string` (name) and an `int` (age).
2. cout << name << age << endl; - This line prints message using the values of `name` and `age` passed to the function.
3. greet("Adil", 20); - This calls the `greet` function with the arguments `"Adil"` and `20`.
4. greet("Adeel", 25); - This calls the `greet` function with the arguments `"Adeel"` and `25`.

Output:
Hello Adil! You are 20 years old.
Hello Adeel! You are 25 years old.
*/
