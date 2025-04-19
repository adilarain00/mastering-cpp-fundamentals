#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create an empty list
    list<int> myList;

    // push_front(), push_back()
    myList.push_back(20);       // List: 20
    myList.push_front(10);      // List: 10 20
    myList.push_back(30);       // List: 10 20 30

    // emplace_front(), emplace_back()
    myList.emplace_front(5);    // List: 5 10 20 30
    myList.emplace_back(40);    // List: 5 10 20 30 40

    // Display list after push and emplace operations
    cout << "List after push and emplace operations: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    // pop_front(), pop_back()
    myList.pop_front(); // Removes 5 → List: 10 20 30 40
    myList.pop_back();  // Removes 40 → List: 10 20 30

    // Display list after pop operations
    cout << "List after pop_front() and pop_back(): ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    // insert() - Insert at a specific position
    auto it = myList.begin();
    ++it;  // Move iterator to second position
    myList.insert(it, 15); // List: 10 15 20 30

    // erase() - Erase an element at a specific position
    it = myList.begin();
    ++it;  // Move iterator to second position (15)
    myList.erase(it); // List: 10 20 30

    // clear() - Remove all elements from the list
    myList.clear(); // List: (empty)

    // empty() - Check if the list is empty
    if (myList.empty()) {
        cout << "List is empty after clear()." << endl;
    } else {
        cout << "List is not empty." << endl;
    }

    // Re-initialize list for further demonstration
    myList = {100, 200, 300, 400, 500};

    // Using begin(), end(), rbegin(), rend() for traversal
    cout << "Forward traversal using begin() to end(): ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Reverse traversal using rbegin() to rend(): ";
    for (auto rit = myList.rbegin(); rit != myList.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}

/*
Explanation:

1. `push_front()`, `push_back()` add elements at the front and back.
2. `emplace_front()`, `emplace_back()` insert elements more efficiently (no copying).
3. `pop_front()`, `pop_back()` remove first and last elements.
4. `insert()`, `erase()` add and remove elements at specific positions.
5. `clear()` clears the entire list, `empty()` checks if the list is empty.
6. `begin()`, `end()` for forward traversal, `rbegin()`, `rend()` for reverse traversal.

Output:

List after push and emplace operations: 5 10 20 30 40
List after pop_front() and pop_back(): 10 20 30
List is empty after clear().
Forward traversal using begin() to end(): 100 200 300 400 500
Reverse traversal using rbegin() to rend(): 500 400 300 200 100
*/
