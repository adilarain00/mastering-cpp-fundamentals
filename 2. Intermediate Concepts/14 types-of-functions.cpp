#include <iostream>
using namespace std;

// No return, no parameters (void)
void greet() {
    cout << "Hello Adil!" << endl;
}

// Return type: int
int add() {
    return 10 + 5;
}

// Return type: float
float multiply(float a, float b) {
    return a * b;
}

int main() {
    greet(); // calling void function

    int result = add();
    cout << "Addition Result: " << result << endl;

    float product = multiply(2.5, 4);
    cout << "Multiplication Result: " << product << endl;

    return 0;
}

/*
👉 Output:
Hello Adil!
Addition Result: 15
Multiplication Result: 10
*/
