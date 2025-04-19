#include <iostream>
#include <stack>  // Required for stack
using namespace std;

int main() {
    // Create a stack of integers
    stack<int> st;

    // Push elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);

    // Show the current top element
    cout << "Top element: " << st.top() << endl; // 30

    // Pop the top element
    st.pop(); // Removes 30

    // Show the new top element
    cout << "Top after pop: " << st.top() << endl; // 20

    // Push more elements
    st.push(40);
    st.push(50);

    // Show size of stack
    cout << "Size of stack: " << st.size() << endl; // 4

    // Check if stack is empty
    if (st.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Display and empty the stack using loop
    cout << "\nPopping all elements: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\nStack is now empty: " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}

/*
Explanation:

1. A stack is a LIFO (Last-In-First-Out) container.
2. Elements are pushed to and popped from the top.
3. `top()` gets the topmost item.
4. `pop()` removes the top item.
5. `push()` adds item to the top.
6. `size()` tells how many items are in the stack.
7. `empty()` checks if the stack is empty.

Output:

Top element: 30
Top after pop: 20
Size of stack: 4
Stack is not empty.

Popping all elements: 50 40 20 10 
Stack is now empty: Yes
*/
