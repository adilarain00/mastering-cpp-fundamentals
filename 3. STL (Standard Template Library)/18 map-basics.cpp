#include <iostream>
#include <map>  // Required for map
using namespace std;

int main() {
    // Declare a map of int keys and string values
    map<int, string> students;

    // Insert elements using []
    students[101] = "Ali";
    students[102] = "Zara";

    // Insert using insert()
    students.insert({103, "Usman"});

    // Display all elements
    cout << "Student Roll Numbers and Names:\n";
    for (auto pair : students) {
        cout << pair.first << " => " << pair.second << endl;
    }

    return 0;
}

/*
Explanation:

1. `map<key, value>` stores sorted unique keys with values.
2. `[]` or `insert()` can be used to insert elements.
3. `first` = key, `second` = value.

Output:

Student Roll Numbers and Names:
101 => Ali
102 => Zara
103 => Usman
*/
