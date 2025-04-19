#include <iostream>
#include <map>  // multimap is in <map>
using namespace std;

int main() {
    multimap<string, int> studentScores;

    // Insert multiple values with the same key
    studentScores.insert({"Ali", 85});
    studentScores.insert({"Zara", 92});
    studentScores.insert({"Ali", 90});  // duplicate key
    studentScores.insert({"Usman", 75});

    // Display all values
    cout << "Student Scores (multimap):\n";
    for (auto pair : studentScores) {
        cout << pair.first << " => " << pair.second << endl;
    }

    return 0;
}

/*
Explanation:

1. `multimap` allows **duplicate keys**.
2. Automatically sorts by key.
3. Useful when you want to store multiple values for the same key.

Output:

Student Scores (multimap):
Ali => 85
Ali => 90
Usman => 75
Zara => 92
*/
