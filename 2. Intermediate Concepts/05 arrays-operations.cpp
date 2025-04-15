#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    // Traversing
    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insertion at beginning
    int value = 5;
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    size++;

    // Insertion at middle (position 3)
    value = 25;
    for (int i = size; i > 3; i--) {
        arr[i] = arr[i - 1];
    }
    arr[3] = value;
    size++;

    // Insertion at end
    arr[size] = 60;
    size++;

    cout << "\nAfter Insertions: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    // Deletion by index (remove element at index 2)
    for (int i = 2; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    // Deletion by value (delete 25)
    int delValue = 25;
    for (int i = 0; i < size; i++) {
        if (arr[i] == delValue) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            break;
        }
    }

    cout << "\nAfter Deletions: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    // Linear Search for 40
    int search = 40;
    int found = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            found = i;
            break;
        }
    }
    cout << "\n\nLinear Search for 40: ";
    if (found != -1) cout << "Found at index " << found;
    else cout << "Not Found";

    // Bubble Sort (for Binary Search)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Binary Search for 40
    int low = 0, high = size - 1, mid;
    found = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == search) {
            found = mid;
            break;
        }
        else if (arr[mid] < search) low = mid + 1;
        else high = mid - 1;
    }
    cout << "\nBinary Search for 40: ";
    if (found != -1) cout << "Found at index " << found;
    else cout << "Not Found";

    // Updating value at index 1 to 99
    arr[1] = 99;
    cout << "\n\nAfter Updating index 1 to 99: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    // Reversing array
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    cout << "\n\nReversed Array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    // Sorting (Selection Sort)
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout << "\n\nSelection Sorted Array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    // Merging with another array
    int arr2[3] = {70, 80, 90};
    int size2 = 3;
    int merged[100];
    for (int i = 0; i < size; i++) merged[i] = arr[i];
    for (int i = 0; i < size2; i++) merged[size + i] = arr2[i];
    int mergedSize = size + size2;

    cout << "\n\nMerged Array: ";
    for (int i = 0; i < mergedSize; i++) cout << merged[i] << " ";

    // Swapping two arrays
    int a1[3] = {1, 2, 3};
    int a2[3] = {4, 5, 6};
    for (int i = 0; i < 3; i++) {
        int temp = a1[i];
        a1[i] = a2[i];
        a2[i] = temp;
    }
    cout << "\n\nAfter Swapping:\nArray 1: ";
    for (int i = 0; i < 3; i++) cout << a1[i] << " ";
    cout << "\nArray 2: ";
    for (int i = 0; i < 3; i++) cout << a2[i] << " ";

    return 0;
}



/*
Explanation:
- Creates and prints an array
- Inserts values at beginning, middle, and end
- Deletes elements by index and value
- Searches using linear and binary search
- Updates values by index
- Reverses the array
- Sorts it using selection sort
- Merges two arrays into one
- Swaps values between two arrays

Output:
Original Array: 10 20 30 40 50
After Insertions: 5 10 20 25 30 40 50 60
After Deletions: 5 10 30 40 50 60

Linear Search for 40: Found at index 3
Binary Search for 40: Found at index 3

After Updating index 1 to 99: 5 99 30 40 50 60

Reversed Array: 60 50 40 30 99 5
Selection Sorted Array: 5 30 40 50 60 99

Merged Array: 5 30 40 50 60 99 70 80 90

After Swapping:
Array 1: 4 5 6
Array 2: 1 2 3
*/