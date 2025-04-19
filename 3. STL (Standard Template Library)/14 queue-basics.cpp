#include <iostream>
#include <queue>  // Required for queue
using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> q;

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Access the front element
    cout << "Front element: " << q.front() << endl;

    // Access the back element
    cout << "Back element: " << q.back() << endl;

    return 0;
}

/*
Explanation:

1. `queue<int> q;` creates a queue of integers.
2. `push()` adds an element to the end (back).
3. `front()` accesses the front element.
4. `back()` accesses the last inserted (back) element.

Output:

Front element: 10
Back element: 30
*/
