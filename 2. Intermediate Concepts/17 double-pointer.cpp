#include <iostream>
using namespace std;

int main() {
    int num = 100;

    int* ptr = &num;          // ptr holds address of num
    int** ptr2 = &ptr;        // ptr2 holds address of ptr

    cout << "Value of num: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;

    cout << "Value of ptr (address of num): " << ptr << endl;
    cout << "Value at *ptr (value of num): " << *ptr << endl;

    cout << "Value of ptr2 (address of ptr): " << ptr2 << endl;
    cout << "Value at *ptr2 (which is ptr): " << *ptr2 << endl;
    cout << "Value at **ptr2 (which is num): " << **ptr2 << endl;

    return 0;
}

/*
Explanation:

- `num`: simple int variable.
- `ptr`: stores address of num.
- `ptr2`: stores address of ptr (pointer to pointer).
- `*ptr2` → value at ptr2 → which is address of num.
- `**ptr2` → value at the address stored in ptr → actual value of num.

Output:
Value of num: 100
Address of num (&num): 0x61fe14
Value of ptr (address of num): 0x61fe14
Value at *ptr (value of num): 100
Value of ptr2 (address of ptr): 0x61fe10
Value at *ptr2 (which is ptr): 0x61fe14
Value at **ptr2 (which is num): 100
*/
