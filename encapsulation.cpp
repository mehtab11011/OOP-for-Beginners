// ENCAPSULATION
// Wrapping up data and member functions into a single unit is called encapsulation.
// Capsule ka matlab hai class ki tarah data aur functions ko ek unit mein rakhna.
// Iska use sensitive data ko hide karne ke liye bhi hota hai, jaise private ya protected access modifiers ka istemal.

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int account_number;
    string account_name;
    double balance;

public:
    // Constructor to initialize account
    Account(int accNum, string accName, double bal) {
        account_number = accNum;
        account_name = accName;
        balance = bal;
    }

    // Getter function to access private data
    void getAccountInfo() {
        cout << "Account Number: " << account_number << endl;
        cout << "Account Name: " << account_name << endl;
        cout << "Balance: " << balance << endl;
    }

    // Setter function to modify balance
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful! New Balance: " << balance << endl;
        } else {
            cout << "Invalid Amount!" << endl;
        }
    }
};

int main() {
    // Creating an account object
    Account acc1(12345, "Mehtab Khan", 5000.0);
    acc1.getAccountInfo();
    
    // Depositing money
    acc1.deposit(2000.0);
    
    return 0;
}
