#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    BankAccount(int accNum, string name, float bal) {
        accountNumber = accNum;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: Rs." << balance << endl;
    }
};

int main() {
    BankAccount acc(1001, "Rahul", 5000);
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();
    return 0;
}
