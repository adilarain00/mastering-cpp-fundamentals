#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[] = {5, 10, 15, 20, 25};

    // Loop through an array using for loop
    cout << "Using traditional for loop:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Loop through an array using range-based for loop (foreach)
    cout << "\nUsing range-based for loop:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Get array size
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    cout << "\nTotal number of elements in the array: " << arraySize << endl;

    return 0;
}

/*
Explanation:

1. The array `numbers` contains 5 integers.
2. A traditional `for` loop is used to access elements using indices.
3. A range-based `for` loop (C++11 and above) is used for simpler iteration over elements.
4. The size of the array is calculated using: total size of array / size of one element.

Output:
Using traditional for loop:
Element at index 0: 5
Element at index 1: 10
Element at index 2: 15
Element at index 3: 20
Element at index 4: 25

Using range-based for loop:
5 10 15 20 25 

Total number of elements in the array: 5
*/
