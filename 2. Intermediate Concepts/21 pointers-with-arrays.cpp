#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr; // points to first element of array

    cout << "Accessing array using pointer:\n";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  // pointer arithmetic to access elements
    }

    return 0;
}

/*
📘 Explanation:
- `int* ptr = arr;` means ptr points to arr[0]
- `*(ptr + i)` gives the ith element of the array

🔍 Output:
10 20 30 40 50
*/
