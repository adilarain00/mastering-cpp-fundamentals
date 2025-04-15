#include <iostream>
using namespace std;

int main() {
    int age = 20;             // Integer
    float height = 5.9f;      // Float
    double weight = 70.5;     // Double
    char grade = 'A';         // Character
    bool isPassed = true;     // Boolean

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPassed << endl;

    return 0;
}

/*
Explanation:

1. boolean  1 byte.     Stores true or false values
2. char     1 byte.     Stores a single character/letter/number, or ASCII values
3. int      2/4 bytes.  Stores whole numbers, without decimals
4. float    4 bytes.    Stores fractional numbers. Sufficient for storing 6-7 decimal digits
5. double   8 bytes.    Stores fractional numbers. Sufficient for storing 15 decimal digits

Output:
Age: 20  
Height: 5.9  
Weight: 70.5  
Grade: A  
Passed: 1
*/
