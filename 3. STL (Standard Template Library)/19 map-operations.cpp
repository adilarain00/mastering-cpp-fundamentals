#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    // Inserting values
    mp[1] = "Apple";
    mp[2] = "Banana";
    mp.insert({5, "Orange"});
    mp.insert({3, "Grapes"});

    // Access using []
    cout << "Element at key 2: " << mp[2] << endl;

    // Size
    cout << "Size of map: " << mp.size() << endl;

    // Check if key exists using count
    cout << "Key 3 exists? " << (mp.count(3) ? "Yes" : "No") << endl;
    cout << "Key 4 exists? " << (mp.count(4) ? "Yes" : "No") << endl;

    // Erase a key
    mp.erase(2);

    // Iterate using iterator
    cout << "\nRemaining key-value pairs:\n";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    // Clear map
    mp.clear();
    cout << "\nMap cleared. Size: " << mp.size() << endl;

    return 0;
}

/*
Explanation:

1. `[]` and `insert()` to add items.
2. `count(key)` checks existence.
3. `erase(key)` removes an item.
4. `begin()` to `end()` used to iterate.
5. `clear()` removes all items.

Output:

Element at key 2: Banana
Size of map: 4
Key 3 exists? Yes
Key 4 exists? No

Remaining key-value pairs:
1 => Apple
3 => Grapes
5 => Orange

Map cleared. Size: 0
*/
