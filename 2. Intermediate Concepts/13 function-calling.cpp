#include <iostream>
using namespace std;

// Call by Value (original not changed)
void valueSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference (original changed)
void referenceSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    valueSwap(x, y);
    cout << "After Call by Value: x = " << x << ", y = " << y << endl;

    referenceSwap(x, y);
    cout << "After Call by Reference: x = " << x << ", y = " << y << endl;

    return 0;
}

/*
👉 Output:
After Call by Value: x = 5, y = 10
After Call by Reference: x = 10, y = 5
*/
