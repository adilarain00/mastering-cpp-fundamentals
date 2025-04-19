#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    // Insert elements
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5); // Duplicate will be ignored

    // Display elements (sorted automatically)
    cout << "Set elements:\n";
    for (int x : s) {
        cout << x << " ";
    }

    // Size
    cout << "\nSize: " << s.size() << endl;

    // Check existence
    cout << "Is 3 present? " << (s.count(3) ? "Yes" : "No") << endl;

    // Erase element
    s.erase(3);

    cout << "After erasing 3:\n";
    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}

/*
Output:
Set elements:
1 3 5
Size: 3
Is 3 present? Yes
After erasing 3:
1 5
*/
