// Polymorphism Example
// Polymorphism in C++ is the ability of an object to take multiple forms.
// This can be achieved through method overloading or method overriding.
// Two types of Polymorphism:
// 1. Compile-time (Function Overloading & Operator Overloading)
//    - Function Overloading: Multiple functions with the same name but different parameters.
// 2. Run-time (Function Overriding)
//    - Function Overriding: Parent and child class both contain the same function but with different implementations.
//    - Virtual Functions allow achieving runtime polymorphism. (enjoy mehtab khan )
#include <iostream>
#include <string>
using namespace std;
class TeacherPolymorphism {
    public:
        TeacherPolymorphism(int a) {
            cout << "Age: " << a << endl;
        }
        TeacherPolymorphism(string name) {
            cout << "Name: " << name << endl;
        }
    };
    
    int main() {
        TeacherPolymorphism t1("Mehtab Khan");
        TeacherPolymorphism t2(30);
        return 0;
    }
    