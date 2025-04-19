#include <iostream>
#include <utility>    // Required for std::pair
using namespace std;

int main() {
    // Declare a pair with two different types: int and string
    pair<int, string> myPair;

    // Assign values to the pair
    myPair.first = 1;          // The first element (int)
    myPair.second = "Apple";   // The second element (string)

    // Display the elements of the pair
    cout << "First: " << myPair.first << ", Second: " << myPair.second << endl;

    // Declare and initialize a pair directly with values
    pair<string, double> anotherPair = make_pair("Pi", 3.14159);

    // Display the elements of the second pair
    cout << "First: " << anotherPair.first << ", Second: " << anotherPair.second << endl;

    // Using `auto` to initialize a pair
    auto thirdPair = make_pair(100, "Hello");

    // Display the elements of the third pair
    cout << "First: " << thirdPair.first << ", Second: " << thirdPair.second << endl;

    return 0;
}

/*
Explanation:

1. `pair<int, string> myPair;` declares a pair where the first element is an `int` and the second is a `string`.
2. `first` and `second` are used to access the elements of the pair.
3. `make_pair()` is a convenient way to initialize a pair.
4. `auto` can be used to let the compiler deduce the types of the pair elements.

Output:

First: 1, Second: Apple
First: Pi, Second: 3.14159
First: 100, Second: Hello
*/
