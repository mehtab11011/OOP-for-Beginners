#include <iostream>
#include <string>
using namespace std;

// Multi-Level Inheritance
// Multi-level inheritance ka matlab hota hai ek class doosri se inherit kare,
// aur phir koi teesri class us second class se inherit kare.
// Yani ek hierarchy create hoti hai jisme ek class dusre se aur wo kisi aur se inherit hoti hai.

// Example: Teacher -> Student -> Depsearch (Research Student)
// Yahan teacher ek base class hai, student teacher se inherit kar raha hai,
// aur depsearch student se inherit kar raha hai.

class Teacher {
public:
    string name;
    string subject;
    int age;

    Teacher(string name, string subject, int age) {
        this->name = name;
        this->subject = subject;
        this->age = age;
    }

    void get() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Teacher {
public:
    int rollno;

    Student(int rollno, string name, string subject, int age) : Teacher(name, subject, age) {
        this->rollno = rollno;
    }

    void get() {
        Teacher::get(); // Teacher class ka get() function call kar raha hai
        cout << "Roll Number: " << rollno << endl;
    }
};

class Depsearch : public Student {
public:
    string research;

    Depsearch(string research, int rollno, string name, string subject, int age) 
        : Student(rollno, name, subject, age) {
        this->research = research;
    }

    void get() {
        Student::get(); // Student class ka get() function call kar raha hai
        cout << "Research Book: " << research << endl;
    }
};

int main() {
    Depsearch d("Math Advanced", 19, "Mehtab Khan", "Math", 19);
    d.get();
    return 0;
}