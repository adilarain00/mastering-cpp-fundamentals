#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Create a queue of integers
    queue<int> q;

    // Push elements
    q.push(100);
    q.push(200);
    q.push(300);

    // Display front and back
    cout << "Front: " << q.front() << endl; // 100
    cout << "Back: " << q.back() << endl;   // 300

    // Check size
    cout << "Size: " << q.size() << endl;

    // Check if queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Pop elements until empty
    cout << "\nRemoving all elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << "\nQueue is now empty: " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}

/*
Explanation:

1. Queue uses FIFO (First In First Out)
2. `push(x)`: Add element at back
3. `pop()`: Remove from front
4. `front()`: Access first element
5. `back()`: Access last (newest) element
6. `empty()`: Check if queue is empty
7. `size()`: Total elements

Output:

Front: 100
Back: 300
Size: 3
Is queue empty? No

Removing all elements: 100 200 300 
Queue is now empty: Yes
*/
