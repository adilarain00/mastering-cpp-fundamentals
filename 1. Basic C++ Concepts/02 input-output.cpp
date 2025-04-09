#include <iostream>
using namespace std;

int main() {
    string name;   // String
    int age;       // Integer

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}

/*
Explanation:

1. cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
2. cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

Output:
Enter your name: Adil  
Enter your age: 20  
Hello, Adil! You are 20 years old.
*/
