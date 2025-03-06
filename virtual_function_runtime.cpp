#include<iostream>
#include<string>
using namespace std;

// Run-time Polymorphism (Function Overriding)
// Parent aur child dono ek hi function ko different implementation ke sath rakh sakte hain.
// Is process ko 'Function Overriding' kehte hain, jisme child class ka function zyada value rakhta hai.

// Virtual Function:
// Jab hum kisi function ko 'virtual' declare karte hain base class mein,
// to C++ runtime ke doran object ki type ko dekh kar decide karta hai ke kaunsa function call karna hai.
// Ye dynamic behavior show karta hai.
// Hum virtual function ko base class mein declare karte hain,
// aur derived class mein bina 'virtual' keyword likhe uska override kar sakte hain.

class teacher {
public:
    virtual void hello() { // Base class ka virtual function
        cout << "Base class \n";
    }
};

class student : public teacher {
public:
    void hello() override { // Derived class ka overridden function
        cout << "Derived class \n";
    }
};

int main() {
    student s1;
    s1.hello(); // Derived class ka function call hoga (runtime polymorphism)
    return 0;
}
