#include <iostream>
using namespace std;

int main() {
    int day = 3;

    switch (day) {                        // Switch statement to check the day number
        case 1:
            cout << "Monday" << endl;     // Output for Monday
            break;
        case 2:
            cout << "Tuesday" << endl;    // Output for Tuesday
            break;
        case 3:
            cout << "Wednesday" << endl;  // Output for Wednesday
            break;
        case 4:
            cout << "Thursday" << endl;   // Output for Thursday
            break;
        case 5:
            cout << "Friday" << endl;     // Output for Friday
            break;
        case 6:
            cout << "Saturday" << endl;   // Output for Saturday
            break;
        case 7:
            cout << "Sunday" << endl;     // Output for Sunday
            break;
        default:
            cout << "Invalid day number!" << endl;  // Output for invalid day number
    }

    return 0;
}

/*
Explanation:

1. Declares an integer variable 'day' and assigns the value 3
2. Uses a switch statement to check the value of 'day'
3. Based on the day number, it prints the corresponding weekday name
4. If the day number is invalid, it prints an error message

Output:

Wednesday
*/
