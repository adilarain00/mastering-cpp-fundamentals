#include <iostream>
using namespace std;

// Function that accepts an argument by reference
void addFive(int &num) {
    num += 5;  // Modify the original variable by adding 5
}

int main() {
    int value = 10;
    
    cout << "Before function call: " << value << endl;  // Print value before modification
    
    // Call the function and pass the variable by reference
    addFive(value);
    
    cout << "After function call: " << value << endl;  // Print value after modification
    return 0;
}

/*
Explanation:

1. void addFive(int &num) - The function takes an integer `num` by reference (`&`), so it can modify the original variable.
2. Inside `addFive(), `num += 5; modifies the value of `num`, which is the same as the variable passed from `main()`.
3. addFive(value); - We pass `value` by reference. Any change in `addFive()` will reflect on `value`.
4. cout << "Before function call: " << value << endl; - Prints the original value (before the function call).
5. cout << "After function call: " << value << endl; - Prints the modified value (after the function call).

Output:
Before function call: 10
After function call: 15
*/
