#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Create an empty deque
    deque<int> myDeque;

    // push_front(), push_back()
    myDeque.push_back(20);       // deque: 20
    myDeque.push_front(10);      // deque: 10 20
    myDeque.push_back(30);       // deque: 10 20 30

    // emplace_front(), emplace_back()
    myDeque.emplace_front(5);    // deque: 5 10 20 30
    myDeque.emplace_back(40);    // deque: 5 10 20 30 40

    // Display deque after push and emplace operations
    cout << "Deque after push and emplace operations: ";
    for (int num : myDeque) {
        cout << num << " ";
    }
    cout << endl;

    // pop_front(), pop_back()
    myDeque.pop_front(); // Removes 5 → deque: 10 20 30 40
    myDeque.pop_back();  // Removes 40 → deque: 10 20 30

    // Display deque after pop operations
    cout << "Deque after pop_front() and pop_back(): ";
    for (int num : myDeque) {
        cout << num << " ";
    }
    cout << endl;

    // insert() - Insert at a specific position
    auto it = myDeque.begin();
    ++it;  // Move iterator to second position
    myDeque.insert(it, 15); // deque: 10 15 20 30

    // erase() - Erase an element at a specific position
    it = myDeque.begin();
    ++it;  // Move iterator to second position (15)
    myDeque.erase(it); // deque: 10 20 30

    // clear() - Remove all elements from the deque
    myDeque.clear(); // deque: (empty)

    // empty() - Check if the deque is empty
    if (myDeque.empty()) {
        cout << "Deque is empty after clear()." << endl;
    } else {
        cout << "Deque is not empty." << endl;
    }

    // Re-initialize deque for further demonstration
    myDeque = {100, 200, 300, 400, 500};

    // Using begin(), end(), rbegin(), rend() for traversal
    cout << "Forward traversal using begin() to end(): ";
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Reverse traversal using rbegin() to rend(): ";
    for (auto rit = myDeque.rbegin(); rit != myDeque.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}

/*
Explanation:

1. `push_front()` / `push_back()` add elements at the front and back of the deque.
2. `emplace_front()` / `emplace_back()` insert elements more efficiently (no copying).
3. `pop_front()` / `pop_back()` remove first and last elements.
4. `insert()` / `erase()` add and remove elements at specific positions.
5. `clear()` clears the entire deque, `empty()` checks if the deque is empty.
6. `begin()` / `end()` for forward traversal, `rbegin()` / `rend()` for reverse traversal.

Output:

Deque after push and emplace operations: 5 10 20 30 40
Deque after pop_front() and pop_back(): 10 20 30
Deque is empty after clear().
Forward traversal using begin() to end(): 100 200 300 400 500
Reverse traversal using rbegin() to rend(): 500 400 300 200 100
*/
