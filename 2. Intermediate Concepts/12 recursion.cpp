#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);  // Recursive call
  } else {
    return 0;  // Base case
  }
}

int main() {
  int result = sum(10);  // Call function
  cout << result;        // Output result
  return 0;
}

/*
Explanation:
1. `sum(k)` adds numbers from k to 1.
2. Stops when k becomes 0 (base case).
3. Recursive calls: 10 + 9 + 8 + ... + 1.

Output:
55
*/
