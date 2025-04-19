#include <iostream>
#include <queue>  // Required for priority_queue
using namespace std;

int main() {
    // Declare a max-heap (default behavior)
    priority_queue<int> pq;

    // Insert elements
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // Show top element (largest)
    cout << "Top element: " << pq.top() << endl;

    return 0;
}

/*
Explanation:

1. `priority_queue<int>` creates a max-heap.
2. `push()` adds elements.
3. `top()` shows the highest-priority (largest) element.

Output:

Top element: 50
*/
