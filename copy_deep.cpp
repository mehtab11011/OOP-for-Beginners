#include <iostream>
#include <string>
using namespace std;

// Deep Copy in C++
// Deep copy ka matlab yeh hota hai ke dynamically allocated memory ka ek naya copy banaya jata hai,
// sirf pointer copy nahi hota. Iska faida yeh hota hai ke agar copied object me koi change karein,
// toh original object par koi asar nahi hota.

class student {
public:
    string name;
    double *cgpaptr;
    
    // Parameterized Constructor
    student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    
    // Deep Copy Constructor
    student(student &obj) {
        this->name = obj.name;
        cgpaptr = new double; // Naya memory allocate kiya
        *this->cgpaptr = *obj.cgpaptr; // Value copy ki
    }
    
    void get() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaptr << endl;
    }
    
    // Destructor jo dynamically allocated memory ko free karega
    ~student() {
        delete cgpaptr;
    }
};

int main() {
    student s1("Mehtab Khan", 9.6);
    s1.get();
    
    student s2(s1); // Deep copy constructor ka use
    *(s2.cgpaptr) = 9.8; // Copied object ka CGPA change kiya
    s2.get();
    
    cout << "Copied Student's Name: " << s2.name << endl;
    
    return 0;
}

/*
Deep Copy ki Definition:
Deep copy ka matlab yeh hai ke ek object ki properties aur dynamically allocated memory ka
bilkul naya copy create kiya jata hai. Is tarha agar copied object me koi change karein,
to original object par koi asar nahi hota.

Deep Copy in Simple Terms (Urdu + English):
- English: Jaise aap apni notebook likhte hain aur uski photocopy bana lete hain. Original
  notebook aur photocopy alag pages rakhti hain, agar ek me change karein to doosre par koi asar nahi hoga.
- Urdu: Jaise aap apni notebook likhte hain aur uski photocopy bana lete hain. Original notebook
  aur photocopy alag alag hain. Agar ek me kuch likhein to doosri par asar nahi hoga.

Shallow Copy Example:
Shallow copy sirf pointer copy karta hai, data copy nahi hota. Is wajah se agar ek object
change karein, to doosra bhi change ho jata hai.
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double *cgpaptr;
    
    // Constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaptr = &cgpa; // Shallow copy (sirf pointer copy hua)
    }
    
    void get() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaptr << endl;
    }
};

int main() {
    double cgpa = 9.6;
    Student s1("Mehtab Khan", cgpa);
    s1.get();
    
    Student s2 = s1; // Shallow copy
    *s2.cgpaptr = 9.8; // Copied object ka CGPA change kiya
    s2.get();
    
    cout << "Original Student's CGPA: " << *s1.cgpaptr << endl; // Yeh bhi change ho gaya!
    
    return 0;
}

