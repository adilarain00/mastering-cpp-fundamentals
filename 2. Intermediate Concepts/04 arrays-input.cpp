#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];             // Taking input for each array element
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";     // Printing each array element
    }

    return 0;
}

/*
Explanation:
- This program creates an integer array of size 5.
- It asks the user to input 5 numbers using a loop.
- Then it prints all the entered numbers using another loop.

Output:
Enter 5 numbers: 10 20 30 40 50
You entered: 10 20 30 40 50
*/
