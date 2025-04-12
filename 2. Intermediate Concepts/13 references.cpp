#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";       // Original variable
    string &meal = food;         // Reference to food

    cout << food << "\n";        // Outputs: Pizza
    cout << meal << "\n";        // Outputs: Pizza

    return 0;
}

/*
Explanation:
1. `meal` is a reference to `food`.
2. Both point to same value.
3. Changing one affects the other.

Output:
Pizza
Pizza
*/
