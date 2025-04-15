#include <iostream> 
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array initialization

    // Simulating the 'for-in' loop (iterating over indices of an array)
    for (int i = 0; i < 5; i++) {                                   // Loop through indices
        cout << "Element at index " << i << ": " << arr[i] << endl; // Output element at index
    }

    return 0;
}

/*
Explanation:

1. Initializes an array 'arr' with values {10, 20, 30, 40, 50}
2. Loops through the indices (0 to 4) of the array
3. Outputs the element at each index along with the index number

Output:

Element at index 0: 10  
Element at index 1: 20  
Element at index 2: 30  
Element at index 3: 40  
Element at index 4: 50
*/
