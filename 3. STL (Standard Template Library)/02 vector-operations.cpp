#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> v;

    // push_back() - adds an element at the end
    v.push_back(10);
    v.push_back(20);

    // emplace_back() - adds an element (more efficient than push_back)
    v.emplace_back(30);
    v.emplace_back(40);

    // Display vector elements
    cout << "Vector elements after push_back and emplace_back: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // pop_back() - removes the last element
    v.pop_back();

    cout << "After pop_back (removes 40): ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Access elements using at() and []
    cout << "Element at index 1 using v.at(1): " << v.at(1) << endl;
    cout << "Element at index 2 using v[2]: " << v[2] << endl;

    // front() and back() - access first and last elements
    cout << "Front element: " << v.front() << endl;
    cout << "Back element: " << v.back() << endl;

    // size() and capacity()
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;

    return 0;
}

/*
Explanation:

1. push_back() and emplace_back() add elements to the end.
2. pop_back() removes the last element.
3. at(index) and [] are used to access elements.
4. front() and back() return the first and last elements.
5. size() gives number of elements; capacity() shows allocated space (can be >= size).

Output: (may vary slightly based on system):

Vector elements after push_back and emplace_back: 10 20 30 40
After pop_back (removes 40): 10 20 30
Element at index 1 using v.at(1): 20
Element at index 2 using v[2]: 30
Front element: 10
Back element: 30
Size of vector: 3
Capacity of vector: 4
*/
