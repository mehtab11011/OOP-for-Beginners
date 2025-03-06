// Constructor in C++
// A constructor is a special method that is called automatically at the time of object creation.

// Four properties of a constructor:
// 1. Has the same name as the class.
// 2. Does not have a return type (like int, void, etc.).
// 3. It is called once at the time of object creation.
// 4. Memory allocation occurs when the object is created.

// Three types of constructors:
// 1. Non-parameterized constructor
// 2. Parameterized constructor
// 3. Copy constructor

#include <iostream>
#include <string>
using namespace std;

// Non-parameterized constructor
class Teacher {
public:
    Teacher() {
        school = "List";
    }
    string name;
    int age;
    string school;
};

// Parameterized constructor and Copy constructor
class Student {
public:
    // Parameterized constructor
    Student(string name, string school, int age) {
        this->name = name;
        this->school = school;
        this->age = age;
    }

    // Copy constructor (shallow copy)
    Student(const Student &orgObj) {
        this->name = orgObj.name;
        this->school = orgObj.school;
        this->age = orgObj.age;
    }

    string name;
    int age;
    string school;
};

int main() {
    // Non-parameterized constructor example
    Teacher t1;
    cout << "Teacher's school: " << t1.school << endl;

    // Parameterized constructor example
    Student s1("Mehtab Khan", "List", 20);
    cout << "Student's name: " << s1.name << endl;
    
    // Copy constructor example
    Student s2(s1);
    cout << "Copied student's school: " << s2.school << endl;
    
    return 0;
}
