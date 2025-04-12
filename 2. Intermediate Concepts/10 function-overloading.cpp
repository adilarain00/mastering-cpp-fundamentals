#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two double numbers
double add(double a, double b) {
    return a + b;
}

int main() {
    int sum1 = add(10, 20);        // Calls add(int, int)
    int sum2 = add(10, 20, 30);    // Calls add(int, int, int)
    double sum3 = add(10.5, 20.5); // Calls add(double, double)
    
    cout << "Sum1 (int + int): " << sum1 << endl;
    cout << "Sum2 (int + int + int): " << sum2 << endl;
    cout << "Sum3 (double + double): " << sum3 << endl;

    return 0;
}

/*
Explanation:
1. `int add(int a, int b)` - Function to add two integers.
2. `int add(int a, int b, int c)` - Function to add three integers.
3. `double add(double a, double b)` - Function to add two double values.
4. The correct function is selected based on the arguments passed.

Output:
Sum1 (int + int): 30
Sum2 (int + int + int): 60
Sum3 (double + double): 31
*/
