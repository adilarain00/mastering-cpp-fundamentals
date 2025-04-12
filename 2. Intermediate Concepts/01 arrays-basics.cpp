#include <iostream>
using namespace std;

int main() {
    // Array's syntax (declaration and initialization)
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access the Elements of an Array
    cout << "Accessing array elements:" << endl;
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;
    cout << "Third element: " << numbers[2] << endl;
    cout << "Fourth element: " << numbers[3] << endl;
    cout << "Fifth element: " << numbers[4] << endl;

    // Change an Array Element
    numbers[2] = 99;  // Changing the third element
    numbers[4] = 55;  // Changing the fifth element

    // Display array after modification
    cout << "\nArray after modification:" << endl;
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;
    cout << "Third element: " << numbers[2] << endl;
    cout << "Fourth element: " << numbers[3] << endl;
    cout << "Fifth element: " << numbers[4] << endl;

    return 0;
}

/*
Explanation:

1. An array named `numbers` is declared with 5 integer elements and initialized.
2. Array elements are accessed individually using their index (starting from 0).
3. Elements at index 2 and 4 are updated using assignment.
4. Modified values are displayed to show the changes.

Output:
Accessing array elements:
First element: 10
Second element: 20
Third element: 30
Fourth element: 40
Fifth element: 50

Array after modification:
First element: 10
Second element: 20
Third element: 99
Fourth element: 40
Fifth element: 55
*/
