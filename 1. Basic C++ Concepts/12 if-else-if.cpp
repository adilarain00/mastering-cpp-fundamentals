#include <iostream>
using namespace std;

int main() {
    int marks = 75;

    if (marks >= 90) {                   // Check if marks are 90 or above
        cout << "Grade: A+" << endl;     // Output for grade A+
    } else if (marks >= 80) {            // Check if marks are between 80 and 89
        cout << "Grade: A" << endl;      // Output for grade A
    } else if (marks >= 70) {            // Check if marks are between 70 and 79
        cout << "Grade: B" << endl;      // Output for grade B
    } else if (marks >= 60) {            // Check if marks are between 60 and 69
        cout << "Grade: C" << endl;      // Output for grade C
    } else {  // Marks are below 60
        cout << "Grade: F (Fail)" << endl;  // Output for failing grade
    }

    return 0;
}

/*
Explanation:

1. Declares an integer variable 'marks' and assigns the value 75
2. Uses if-else if-else statements to assign grades based on marks
3. Prints the appropriate grade based on the given marks

Output:
Grade: B
*/
