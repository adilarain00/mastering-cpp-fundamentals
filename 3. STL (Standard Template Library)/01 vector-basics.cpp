#include <iostream>
#include <vector>    // Include vector header
using namespace std;

int main() {
    // Declare an empty vector of integers
    vector<int> numbers;

    // Declare and initialize a vector with values
    vector<int> values = {10, 20, 30};

    // Displaying elements of 'values' vector
    cout << "Elements in 'values' vector (using initializer list): ";
    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Explanation:

1. 'numbers' is an empty vector of integers (not used in this example).
2. 'values' is initialized directly with 10, 20, and 30 using curly braces {}.
3.  We used a simple for loop to print all elements in the vector.

Output:

Elements in 'values' vector (using initializer list): 10 20 30
*/
