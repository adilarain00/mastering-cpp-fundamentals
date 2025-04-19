#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    ms.insert(10);
    ms.insert(20);
    ms.insert(10); // allowed
    ms.insert(30);

    cout << "Multiset elements:\n";
    for (int x : ms) {
        cout << x << " ";
    }

    // Erase only one 10
    ms.erase(ms.find(10));

    cout << "\nAfter erasing one 10:\n";
    for (int x : ms) {
        cout << x << " ";
    }

    return 0;
}

/*
Explanation:

1. Duplicates allowed.
2. Sorted order.

Output:

Multiset elements:
10 10 20 30
After erasing one 10:
10 20 30
*/
