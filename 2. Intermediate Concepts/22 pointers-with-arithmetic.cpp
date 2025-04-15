#include <iostream>
using namespace std;

int main() {
    int arr[3] = {100, 200, 300};
    int* p = arr;

    cout << "Current: " << *p << endl;      // 100
    p++;  // move to next element
    cout << "After p++: " << *p << endl;    // 200
    p++;  // move to next
    cout << "After another p++: " << *p << endl;  // 300
    p--;  // go back
    cout << "After p--: " << *p << endl;    // 200

    return 0;
}

/*
📘 Explanation:
- Pointer moves through array using `p++` and `p--`
- This is possible because arrays store data in **contiguous memory**

🔍 Output:
Current: 100
After p++: 200
After another p++: 300
After p--: 200
*/
