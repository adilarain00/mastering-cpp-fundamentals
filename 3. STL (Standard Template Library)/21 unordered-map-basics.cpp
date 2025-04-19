#include <iostream>
#include <unordered_map>  // Required for unordered_map
using namespace std;

int main() {
    unordered_map<string, int> marks;

    // Insert values
    marks["Ali"] = 85;
    marks["Zara"] = 92;
    marks["Usman"] = 75;

    // Insert using insert()
    marks.insert({"Nida", 88});

    // Display all key-value pairs (order not guaranteed)
    cout << "Student Marks (unordered_map):\n";
    for (auto pair : marks) {
        cout << pair.first << " => " << pair.second << endl;
    }

    return 0;
}

/*
Explanation:

1. `unordered_map` stores key-value pairs using hashing.
2. It is **faster** than map (on average) but **not ordered**.
3. Keys must be unique.

Output (order may vary):

Student Marks (unordered_map):
Ali => 85
Zara => 92
Usman => 75
Nida => 88
*/
