#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    cout << "Bitwise Operations:" << endl;

    // Bitwise AND
    cout << "a & b = " << (a & b) << endl;  // 0101 & 0011 = 0001 (1 in decimal)

    // Bitwise OR
    cout << "a | b = " << (a | b) << endl;  // 0101 | 0011 = 0111 (7 in decimal)

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl;  // 0101 ^ 0011 = 0110 (6 in decimal)

    // Bitwise NOT
    cout << "~a = " << (~a) << endl;        // ~0101 = 1010 (-6 in decimal, assuming 4-bit two's complement)

    // Left shift (shift bits to the left by 1)
    cout << "a << 1 = " << (a << 1) << endl;  // 0101 << 1 = 1010 (10 in decimal)

    // Right shift (shift bits to the right by 1)
    cout << "a >> 1 = " << (a >> 1) << endl;  // 0101 >> 1 = 0010 (2 in decimal)

    return 0;
}

/*
Explanation:

1. Initializes two integer variables 'a' and 'b' with values 5 and 3, respectively
2. Demonstrates bitwise AND, OR, XOR, and NOT operations on 'a' and 'b'
3. Left and right shift operations are also demonstrated on 'a'

Output:
Bitwise Operations:
a & b = 1
a | b = 7
a ^ b = 6
~a = -6
a << 1 = 10
a >> 1 = 2
*/
