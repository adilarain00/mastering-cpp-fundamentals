#include <iostream>
using namespace std;

int main() {
    int* ptr = NULL;  // or use nullptr in modern C++

    if (ptr == NULL) {
        cout << "Pointer is null!" << endl;
    } else {
        cout << "Pointer points to: " << *ptr << endl;
    }

    return 0;
}

/*
📘 Explanation:
- We declare a pointer and initialize it with NULL.
- We check whether it's pointing to anything or not.

🔍 Output:
Pointer is null!
*/
