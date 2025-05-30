#include<iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;

public:
    string holderName;

    // Default Constructor
    BankAccount() {
        accountNumber = 0;
        balance = 0.0;
        holderName = "Unknown";
        cout << "✅ Default constructor called.\n";
    }

    // Parameterized Constructor
    BankAccount(string name, int accNo, float bal) {
        holderName = name;
        accountNumber = accNo;
        balance = bal;
        cout << "✅ Parameterized constructor called.\n";
    }

    // Display account details
    void DisplayDetails() {
        cout << "\n🔎 Account Details:\n";
        cout << "Holder Name   : " << holderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance       : $" << balance << endl;
    }

    // Deposit function
    void Deposit(float amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "💰 $" << amount << " deposited successfully.\n";
        } else {
            cout << "⚠️ Invalid deposit amount.\n";
        }
    }

    // Withdraw function
    void Withdraw(float amount) {
        if (amount <= balance && amount > 0) {
            balance = balance- amount;
            cout << "💸 $" << amount << " withdrawn successfully.\n";
        } else {
            cout << "❌ Insufficient balance or invalid amount!\n";
        }
    }

    // Destructor
    ~BankAccount() {
        cout << "❌ Account closed for " << holderName << ".\n";
    }
};

// Main function to test
int main() {
    BankAccount A1("Ali", 1023, 5000.00);  // Parameterized constructor
    A1.DisplayDetails();

    A1.Deposit(1000);
    A1.Withdraw(2000);
    A1.Withdraw(5000); // Should show error

    cout << "\n---\n";

    BankAccount A2; // Default constructor
    A2.DisplayDetails();

    return 0;
}
