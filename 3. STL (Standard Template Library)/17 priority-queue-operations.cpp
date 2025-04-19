#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Declare a max-heap
    priority_queue<int> pq;

    // Insert elements
    pq.push(40);
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // Display top (max) element
    cout << "Top element (max): " << pq.top() << endl;

    // Display size
    cout << "Size: " << pq.size() << endl;

    // Check if empty
    cout << "Is empty? " << (pq.empty() ? "Yes" : "No") << endl;

    // Pop all elements
    cout << "\nElements in descending order (max-heap): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}

/*
Explanation:

1. `priority_queue` automatically sorts elements in descending order.
2. `top()` shows the highest element.
3. `pop()` removes the top.
4. `empty()` and `size()` are also available.

Output:

Top element (max): 40
Size: 4
Is empty? No

Elements in descending order (max-heap): 40 30 20 10 
*/
