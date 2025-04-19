#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 8, 1, 9};

    // Sort in descending order using greater<int>()
    sort(nums.begin(), nums.end(), greater<int>());

    cout << "Descending order: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}

/*
Output:

Descending order: 9 8 5 2 1
*/
