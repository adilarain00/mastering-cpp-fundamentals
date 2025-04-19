#include <iostream>
#include <deque> // Required for std::deque
using namespace std;

int main() {
    // 1️⃣ Declare an empty deque of integers
    deque<int> myDeque;

    // 2️⃣ Push elements to the back and front of the deque
    myDeque.push_back(20);      // deque: 20
    myDeque.push_front(10);     // deque: 10 20
    myDeque.push_back(30);      // deque: 10 20 30

    // 3️⃣ Display elements of deque
    cout << "Deque elements: ";
    for (int num : myDeque) {
        cout << num << " ";
    }
    cout << endl;

    // 4️⃣ Accessing front and back elements
    cout << "Front element: " << myDeque.front() << endl;
    cout << "Back element: " << myDeque.back() << endl;

    // 5️⃣ Pop elements from the front and back
    myDeque.pop_front();   // Removes 10 → deque: 20 30
    myDeque.pop_back();    // Removes 30 → deque: 20

    // Display deque after pops
    cout << "Deque after pop_front() and pop_back(): ";
    for (int num : myDeque) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*
Explanation:

1. `deque<int> myDeque;` creates an empty deque.
2. `push_back()` and `push_front()` add elements at the back and front of the deque.
3. `front()` and `back()` access the first and last elements.
4. `pop_front()` and `pop_back()` remove the first and last elements.

Output:

Deque elements: 10 20 30 
Front element: 10
Back element: 30
Deque after pop_front() and pop_back(): 20
*/
