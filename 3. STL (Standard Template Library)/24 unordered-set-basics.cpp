#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<string> uset;

    uset.insert("apple");
    uset.insert("banana");
    uset.insert("apple"); // duplicate

    cout << "Unordered Set elements:\n";
    for (string fruit : uset) {
        cout << fruit << " ";
    }

    return 0;
}

/*
Explanation:

1. Stores unique elements.
2. Fast insertion/search (O(1) avg).
3. No order.

Output (order may vary):

Unordered Set elements:
banana apple
*/
