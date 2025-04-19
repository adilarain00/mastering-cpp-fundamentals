#include <iostream>
#include <list>     // Required for std::list
using namespace std;

int main() {
    // Declare an empty list of integers
    list<int> myList;

    // Initialize list with values
    list<int> numbers = {10, 20, 30, 40, 50};

    // Display elements using iterator
    cout << "Elements in the list: ";
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

/*
Explanation:

1. `list<int> myList;` creates an empty list of integers.
2. `list<int> numbers = {...};` initializes list with values.
3. We use an iterator to loop through the list and print values.

Output:

Elements in the list: 10 20 30 40 50
*/
