#include<iostream>
#include<string>
using namespace std;

// static keyword ka istemal
// Jab hum kisi function ke andar aik variable banate hain, to wo sirf us function ke andar hi kaam karta hai
// aur function ke har call par dobara se create hota hai.
// Lekin agar us variable ko 'static' declare kar dein, to wo program ki zindagi bhar barqarar rehta hai
// aur function ke har call par apni purani value ko yaad rakhta hai.

void num() {
    static int x = 0;  // 'static' ka istemal karne se ye variable barqarar rehta hai
    cout << "x: " << x << endl;
    x++;  // Har baar function call hone par 'x' ki value barhti rahegi
}

int main() {
    num(); // Pehli baar call, x = 0
    num(); // Doosri baar call, x = 1
    num(); // Teesri baar call, x = 2
    num(); // Chauthi baar call, x = 3
    return 0;
}
