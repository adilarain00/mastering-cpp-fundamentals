#include <iostream>
#include <vector>
#include <algorithm> // Required for STL algorithms
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 8, 3, 9, 8};

    // reverse()
    reverse(v.begin(), v.end());
    cout << "Reversed vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // count()
    int cnt = count(v.begin(), v.end(), 8);
    cout << "Count of 8: " << cnt << endl;

    // find()
    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end())
        cout << "3 is found at index: " << (it - v.begin()) << endl;
    else
        cout << "3 not found" << endl;

    // min_element()
    auto minIt = min_element(v.begin(), v.end());
    cout << "Minimum element: " << *minIt << endl;

    // max_element()
    auto maxIt = max_element(v.begin(), v.end());
    cout << "Maximum element: " << *maxIt << endl;

    // sort()
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // all_of()
    bool allPositive = all_of(v.begin(), v.end(), [](int x) { return x > 0; });
    cout << "All elements are positive? " << (allPositive ? "Yes" : "No") << endl;

    // any_of()
    bool anyEven = any_of(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    cout << "Any even element? " << (anyEven ? "Yes" : "No") << endl;

    // none_of()
    bool noneNegative = none_of(v.begin(), v.end(), [](int x) { return x < 0; });
    cout << "No negative elements? " << (noneNegative ? "Yes" : "No") << endl;

    return 0;
}

/*
OUTPUT:

Reversed vector: 8 9 3 8 1 8 2 5 
Count of 8: 3
3 is found at index: 2
Minimum element: 1
Maximum element: 9
Sorted vector: 1 2 3 5 8 8 8 9 
All elements are positive? Yes
Any even element? Yes
No negative elements? Yes
*/
