#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initial vector
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // insert() - insert element at specific position
    v.insert(v.begin() + 2, 25);  // Insert 25 at index 2

    cout << "After insert(25 at index 2): ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // erase() - erase element at a specific position
    v.erase(v.begin() + 3);  // Erase element at index 3

    cout << "After erase(index 3): ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // clear() - remove all elements
    v.clear();

    // empty() - check if vector is empty
    if (v.empty()) {
        cout << "Vector is empty after clear()." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    return 0;
}

/*
Explanation:

1. insert(): Adds an element at a given position using an iterator.
2. erase(): Removes an element from a specific position.
3. clear(): Deletes all elements from the vector.
4. empty(): Returns true if the vector is empty.

Output:

Original vector: 10 20 30 40 50
After insert(25 at index 2): 10 20 25 30 40 50
After erase(index 3): 10 20 25 40 50
Vector is empty after clear().
*/
