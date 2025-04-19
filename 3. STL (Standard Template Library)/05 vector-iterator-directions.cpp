#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize vector with values
    vector<int> v = {10, 20, 30, 40, 50};

    // begin() and end() - Forward traversal
    cout << "Forward using begin() to end(): ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // rbegin() and rend() - Reverse traversal
    cout << "Reverse using rbegin() to rend(): ";
    for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}

/*
Explanation:

1. `begin()` returns iterator to the first element.
2. `end()` returns iterator to just after the last element.
3. `rbegin()` returns reverse_iterator to the last element.
4. `rend()` returns reverse_iterator to just before the first element.

Output:

Forward using begin() to end(): 10 20 30 40 50
Reverse using rbegin() to rend(): 50 40 30 20 10
*/
