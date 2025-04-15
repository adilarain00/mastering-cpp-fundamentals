#include <iostream>
using namespace std;

// Named Structure: Creating a structure named 'Student'
struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    // One Structure in Multiple Variables
    Student student1, student2;

    // Accessing Structure Members using dot operator
    student1.name = "Adil";
    student1.age = 21;
    student1.marks = 88.5;

    student2.name = "Sara";
    student2.age = 20;
    student2.marks = 92.3;

    // Displaying values
    cout << "Student 1 Information:\n";
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Marks: " << student1.marks << endl;

    cout << "\nStudent 2 Information:\n";
    cout << "Name: " << student2.name << endl;
    cout << "Age: " << student2.age << endl;
    cout << "Marks: " << student2.marks << endl;

    return 0;
}

/*
Explanation

1. Create: We created a structure using struct Student.
2. Access: We used . (dot) to access structure members.
3. One Structure in Multiple Variables: Used student1 and student2 from the same structure.
4. Named Structure: The structure is named Student for reuse.

Output
Student 1 Information:
Name: Adil
Age: 21
Marks: 88.5

Student 2 Information:
Name: Sara
Age: 20
Marks: 92.3
*/