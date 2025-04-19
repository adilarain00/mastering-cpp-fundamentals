#include <iostream>
#include <algorithm>  // For sort()
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 8, 1, 9};

    // Sort in ascending order (default)
    sort(nums.begin(), nums.end());

    cout << "Ascending order: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}

/*
Output:
Ascending order: 1 2 5 8 9
*/
