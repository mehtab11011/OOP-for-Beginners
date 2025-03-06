// Abstraction in C++
// Abstraction is the concept of hiding unnecessary details and exposing only the essential features.
// Access modifiers are used to implement abstraction.

#include <iostream>
#include <string>
using namespace std;

// Abstract class (Base class)
// An abstract class is used only for inheritance and cannot have objects of its own.
// It is used to define an interface for derived classes.
class Car {
public:
    virtual void size() = 0; // Pure virtual function makes this class abstract
};

// Derived class inheriting from Car
class Honda : public Car {
public:
    void size() override { // Override the pure virtual function
        cout << "Honda size is 76cm\n";
    }
};

int main() {
    Honda h;
    h.size(); // Calls the overridden function in the derived class
    return 0;
}
