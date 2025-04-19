#include <iostream>
#include <stack>  // Required for stack
using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> st;

    // Pushing elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);

    // Display the top element of the stack
    cout << "Top element: " << st.top() << endl; // Should print 30

    // Popping an element from the stack
    st.pop(); // Removes the top element (30)

    // Display the top element after pop
    cout << "Top after pop: " << st.top() << endl; // Should print 20

    return 0;
}

/*
Explanation:

1. `stack<int> st;` creates a stack that stores integers.
2. `push()` adds an element to the top of the stack.
3. `top()` returns the element at the top of the stack.
4. `pop()` removes the top element from the stack.

Output:
Top element: 30
Top after pop: 20
*/
