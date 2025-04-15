#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int* p = &a;      // p holds address of a
    int** q = &p;     // q holds address of p

    cout << *p << endl;     // Value at p → value of a → 5
    cout << **q << endl;    // Value at address pointed by q → value of a → 5
    cout << p << endl;      // Address of a
    cout << *q << endl;     // Value at q → which is address of a (same as p)

    return 0;
}

/*
📘 Explanation:
- `a = 5`
- `p = &a` means p holds address of a
- `q = &p` means q holds address of p

🔍 Output (example):
5
5
0x61ff14   ← (address of a)
0x61ff14   ← (same, because *q = p = &a)
*/
