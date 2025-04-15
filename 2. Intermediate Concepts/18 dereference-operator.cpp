#include <iostream>
using namespace std;

int main() {
    int num = 30;
    int* ptr = &num;  // ptr holds the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;

    cout << "Value of ptr (address stored): " << ptr << endl;
    cout << "Value at *ptr (dereferenced value): " << *ptr << endl;

    // Changing value using pointer
    *ptr = 99;
    cout << "Updated value of num after *ptr = 99: " << num << endl;

    return 0;
}

/*
📘 Explanation:
- `*ptr` is used to access or modify the value at the address `ptr` is pointing to.
- Initially, `num = 30`.
- We used `*ptr = 99` to change the value of `num` through the pointer.

🔍 Output (example):
Value of num: 30
Address of num: 0x61fe14
Value of ptr (address stored): 0x61fe14
Value at *ptr (dereferenced value): 30
Updated value of num after *ptr = 99: 99
*/
