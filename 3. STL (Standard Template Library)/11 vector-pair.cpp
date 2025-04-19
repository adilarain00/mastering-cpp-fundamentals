#include <iostream>
#include <vector>
#include <utility> // For std::pair
using namespace std;

int main() {
    // Create a vector of pairs (pair<int, string>)
    vector<pair<int, string>> v;

    // Push pairs into the vector
    v.push_back(make_pair(1, "Apple"));
    v.push_back(make_pair(2, "Banana"));
    v.push_back(make_pair(3, "Cherry"));

    // Display elements of the vector of pairs
    cout << "Vector of pairs: " << endl;
    for (const auto& p : v) {
        cout << "First: " << p.first << ", Second: " << p.second << endl;
    }

    // Accessing and modifying elements using indices
    v[0].first = 10;  // Modify the first element of the first pair
    v[0].second = "Grapes"; // Modify the second element of the first pair

    // Display updated vector of pairs
    cout << "\nUpdated Vector of pairs: " << endl;
    for (const auto& p : v) {
        cout << "First: " << p.first << ", Second: " << p.second << endl;
    }

    // Using emplace_back to add a pair
    v.emplace_back(4, "Date");

    // Display the final vector after emplace_back
    cout << "\nFinal Vector after emplace_back: " << endl;
    for (const auto& p : v) {
        cout << "First: " << p.first << ", Second: " << p.second << endl;
    }

    return 0;
}

/*
Explanation:

1. `vector<pair<int, string>> v;` creates a vector of pairs, where each pair holds an `int` and a `string`.
2. `push_back()` adds a pair to the vector, and `make_pair()` is used to create the pair.
3. `emplace_back()` is used to add a pair directly to the vector without creating a temporary object.
4. The elements of the vector can be accessed and modified using indices (`v[i].first` and `v[i].second`).

Output:

Vector of pairs: 
First: 1, Second: Apple
First: 2, Second: Banana
First: 3, Second: Cherry

Updated Vector of pairs: 
First: 10, Second: Grapes
First: 2, Second: Banana
First: 3, Second: Cherry

Final Vector after emplace_back: 
First: 10, Second: Grapes
First: 2, Second: Banana
First: 3, Second: Cherry
First: 4, Second: Date
*/
