#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable

void showScope() {
    int localVar = 50;  // Local variable
    cout << "Inside function - globalVar: " << globalVar << endl;
    cout << "Inside function - localVar: " << localVar << endl;
}

int main() {
    int localVar = 10;  // Local variable in main
    cout << "Inside main - globalVar: " << globalVar << endl;
    cout << "Inside main - localVar: " << localVar << endl;

    showScope();  // Call function to see scope difference

    return 0;
}

/*
Explanation:
1. `globalVar` - Accessible in all functions (global scope).
2. `localVar` - Separate in `main` and `showScope()` (local scope).
3. Same name allowed in different scopes.

Output:
Inside main - globalVar: 100
Inside main - localVar: 10
Inside function - globalVar: 100
Inside function - localVar: 50
*/
