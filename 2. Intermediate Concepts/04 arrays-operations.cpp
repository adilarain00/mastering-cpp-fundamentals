#include <iostream>
using namespace std;

int main() {
    // Finding elements in an array
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 30;
    bool found = false;
    
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            cout << "Element " << target << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found." << endl;
    }

    // Adding element (not dynamic in fixed-size array)
    int newArr[6] = {10, 20, 30, 40, 50, 60};  // Manually added
    cout << "Array after adding an element: ";
    for (int i = 0; i < 6; i++) cout << newArr[i] << " ";
    cout << endl;

    // Remove element (simulate by skipping it)
    cout << "Array after removing element 30: ";
    for (int i = 0; i < 6; i++) {
        if (newArr[i] != 30)
            cout << newArr[i] << " ";
    }
    cout << endl;

    // Emptying an array
    for (int i = 0; i < 6; i++) newArr[i] = 0;
    cout << "Array after emptying: ";
    for (int i = 0; i < 6; i++) cout << newArr[i] << " ";
    cout << endl;

    // Combining two arrays
    int a[] = {1, 2, 3}, b[] = {4, 5, 6};
    int c[6];
    for (int i = 0; i < 3; i++) c[i] = a[i];
    for (int i = 0; i < 3; i++) c[i + 3] = b[i];
    cout << "Combined array: ";
    for (int i = 0; i < 6; i++) cout << c[i] << " ";
    cout << endl;

    return 0;
}

/*
Explanation:

1. Finds a target value (30) in an array and prints its index.
2. Shows how to "add" an element by manually creating a larger array.
3. Simulates removal by skipping the element during output.
4. Empties array by setting each element to 0.
5. Combines two arrays using a loop.

Output:
Element 30 found at index 2  
Array after adding an element: 10 20 30 40 50 60  
Array after removing element 30: 10 20 40 50 60  
Array after emptying: 0 0 0 0 0 0  
Combined array: 1 2 3 4 5 6
*/
