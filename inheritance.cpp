#include <iostream>
#include <string>
using namespace std;

// Types of Inheritance:
// 1. Single Inheritance
// 2. Multi-level Inheritance
// 3. Multiple Inheritance
// 4. Hierarchical Inheritance (Parent class se multiple child classes inherit karti hain)
// 5. Hybrid Inheritance (Mix of different types of inheritance)

class Teacher {
protected:
    string name;
    int age;

public:
    Teacher(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Method to display teacher details
    void displayTeacher() {
        cout << "Teacher Name: " << name << endl;
        cout << "Teacher Age: " << age << endl;
    }
};

class Student : public Teacher {
    int roll_number;

public:
    Student(string name, int age, int roll_number) : Teacher(name, age) {
        this->roll_number = roll_number;
    }

    // Method to display student details
    void displayStudent() {
        // Display teacher part by calling teacher method
        displayTeacher();
        // Display student-specific details
        cout << "Student Roll Number: " << roll_number << endl;
    }
};

int main() {
    Teacher t("Mehtab Khan", 35);
    Student s("Ali", 20, 90);

    // Display details of teacher and student separately
    cout << "Teacher Details:" << endl;
    t.displayTeacher();
    cout << "\nStudent Details:" << endl;
    s.displayStudent();

    return 0;
}
