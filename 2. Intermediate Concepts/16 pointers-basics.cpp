#include <iostream>
using namespace std;

int main() {
    int num = 50;           // Simple integer variable
    int* ptr = &num;        // Pointer variable holding address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr (address stored): " << ptr << endl;
    cout << "Value at address stored in ptr (*ptr): " << *ptr << endl;

    return 0;
}

/*
📘 Explanation:
- int num = 50; → a normal variable.
- int* ptr = &num; → a pointer that stores the address of `num`.
- `ptr` holds the address.
- `*ptr` gives the value stored at that address (dereferencing).

🔍 Output (example):
Value of num: 50
Address of num: 0x61fe14
Value of ptr (address stored): 0x61fe14
Value at address stored in ptr (*ptr): 50

Note: The address will change every time you run the program.
*/
