#include <iostream>
using namespace std;

int main() {
    int x = 10;  // Variable initialization

    cout << "Initial value of x: " << x << endl;  // Display initial value

    // Using assignment operators
    x += 5;  // x = x + 5
    cout << "x += 5: " << x << endl;  // Output after addition

    x -= 3;  // x = x - 3
    cout << "x -= 3: " << x << endl;  // Output after subtraction

    x *= 2;  // x = x * 2
    cout << "x *= 2: " << x << endl;  // Output after multiplication

    x /= 4;  // x = x / 4
    cout << "x /= 4: " << x << endl;  // Output after division

    x %= 3;  // x = x % 3
    cout << "x %= 3: " << x << endl;  // Output after modulus (remainder)

    return 0;
}

/*
Explanation:

Operator      Example           Same-as
   =          x = 5              x = 5 
   +=         x += 3           x = x + 3   
   -=         x -= 3           x = x - 3   
   *=         x *= 3           x = x * 3   
   /=         x /= 3           x = x / 3   
   %=         x %= 3           x = x % 3   
   &=         x &= 3           x = x & 3   
   |=         x |= 3           x = x | 3   
   ^=         x ^= 3           x = x ^ 3   
   >>=        x >>= 3          x = x >> 3  
   <<=        x <<= 3          x = x << 3

Output:

Initial value of x: 10
x += 5: 15
x -= 3: 12
x *= 2: 24
x /= 4: 6
x %= 3: 0
*/
