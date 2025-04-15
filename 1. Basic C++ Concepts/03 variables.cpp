#include <iostream>
using namespace std;

int main() {
    int myNum = 5;               // Integer
    double myFloatNum = 5.99;    // Float
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String
    bool myBoolean = true;       // Boolean

    cout << "Integer: " << myNum << endl;
    cout << "Floating point number: " << myFloatNum << endl;
    cout << "Character: " << myLetter << endl;
    cout << "String: " << myText << endl;
    cout << "Boolean: " << myBoolean << endl;

    return 0;
}

/*
Explanation:

1. int - stores integers (whole numbers), without decimals, such as 123 or -123
2. double - stores floating point numbers, with decimals, such as 19.99 or -19.99
3. char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
4. string - stores text, such as "Hello World". String values are surrounded by double quotes
5. bool - stores values with two states: true or false

Output:
Integer: 5  
Floating point number: 5.99  
Character: D  
String: Hello  
Boolean: 1
*/
