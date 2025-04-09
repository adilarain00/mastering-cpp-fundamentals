#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array initialization

    // Simulating the 'for-of' loop (iterating over values of an array)
    for (int num : arr) {  // Loop through values of the array
        cout << "Number: " << num << endl;  // Output each number
    }

    return 0;
}

/*
Explanation:

1. Initializes an array 'arr' with values {10, 20, 30, 40, 50}
2. Iterates directly over the values in the array using a range-based for loop
3. Outputs each value in the array with the label "Number:"

Output:
Number: 10  
Number: 20  
Number: 30  
Number: 40  
Number: 50
*/
