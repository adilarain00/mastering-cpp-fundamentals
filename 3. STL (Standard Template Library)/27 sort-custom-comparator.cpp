#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Custom comparator: sort even numbers first, then odd (ascending)
bool customCompare(int a, int b) {
    if ((a % 2 == 0) && (b % 2 != 0)) return true;
    if ((a % 2 != 0) && (b % 2 == 0)) return false;
    return a < b;
}

int main() {
    vector<int> nums = {5, 2, 8, 1, 3, 6, 7};

    sort(nums.begin(), nums.end(), customCompare);

    cout << "Custom sorted: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}

/*
Output:

Custom sorted: 2 6 8 1 3 5 7
(Evens first, then odds)
*/
