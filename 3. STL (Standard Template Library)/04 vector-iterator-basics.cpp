#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector with some values
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Declaring an iterator for the vector
    vector<int>::iterator it;

    // Using the iterator to traverse the vector
    cout << "Vector elements using iterator: ";
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " "; // Dereference to get value
    }
    cout << endl;

    return 0;
}

/*
Explanation:

1. `vector<int>::iterator it;` declares an iterator for an int vector.
2. `begin()` points to the first element, `end()` points just after the last.
3. We increment the iterator using `++it` and access values using `*it`.

Output:

Vector elements using iterator: 10 20 30 40 50
*/
