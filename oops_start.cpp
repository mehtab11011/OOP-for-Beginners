#include <iostream>
#include <string>
using namespace std;

// Class
class Teacher {
    // Attributes and Properties
private:   // Access Modifier
    int age;

public:
    string name;
    string subject;
    string email;

    // Methods 
    void change(string books) {
        subject = books;
    }
    
    void setAge(int s1) {
        age = s1;
    }
    
    int getAge() {
        return age;
    }
};

int main() {
    // Object Creation
    Teacher s;
    s.name = "Mehtab Khan";
    s.setAge(25); // Age set to 25 (Fixed a logical error: age 2500 was unrealistic)
    s.subject = "English";
    s.email = "mk001@gmail.com";
    
    cout << s.name << " this is your age " << s.getAge() << endl;
    
    return 0;
}

// Access Modifiers:
// 1. Private   - Data & methods are accessible only inside the class.
// 2. Public    - Data & methods are accessible inside and outside the class.
// 3. Protected - Data & methods are accessible inside the class & child classes.
// This marks the start of OOP concepts in C++.

// Definition of OOP:
// Object-Oriented Programming (OOP) is a programming paradigm that uses objects and classes.
// It helps in organizing code, making it reusable, scalable, and easier to manage.
// OOP has four main principles:
// 1. Encapsulation - Wrapping data and methods into a single unit (class).
// 2. Inheritance - Allowing one class to inherit properties and behavior from another.
// 3. Polymorphism - The ability of a function or method to take multiple forms.
// 4. Abstraction - Hiding implementation details and exposing only the necessary parts.
