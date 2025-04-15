#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";        // Declare a string variable

    cout << &food << endl;        // Print memory address of food

    return 0;
}

/*
Explanation:
1. `&food` gives memory address.
2. Shows where 'food' is stored in memory.

Output:
0x6dfed4  (example address, may vary)
*/
