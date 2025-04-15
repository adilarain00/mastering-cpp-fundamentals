#include <iostream>
using namespace std;

int main() {
    int age = 20;
    char grade = 'A';

    // Printing memory addresses using '&' (address-of) operator
    cout << "Address of int (age): " << &age << endl;
    cout << "Address of char (grade): " << (void*)&grade << endl; // cast to void* to show address

    return 0;
}

/*
📘 Explanation:
- '&' gives the memory address of a variable.
- All variables are stored in RAM, and each has a unique address.
- (void*)&grade: used to correctly print char address (else prints actual char).

🔍 Output (will vary):
Address of int (age): 0x61fe1c
Address of char (grade): 0x61fe1b

Note: Memory addresses will be different each time you run.
*/
