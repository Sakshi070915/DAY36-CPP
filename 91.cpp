/* 2.Create a single Bank Account class with a method to withdraw money. 
Throw an exception if the withdrawal amount exceeds the acount balance */
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initial_balance) : balance(initial_balance) {}

    // Method to withdraw money
    void withdraw(double amount) {
        try {
            if (amount < 0) {
                throw -1; // Throw an integer for negative input
            }
            if (amount > balance) {
                throw string("Error: Insufficient balance."); // Throw a string for insufficient funds
            }
            balance -= amount; // Deduct the amount
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        } catch (int) { // Catch negative amounts
            cout << "Error: Enter a positive amount to withdraw." << endl;
        } catch (string) { // Catch insufficient balance
            cout << "Error: Insufficient balance." << endl;
        }
    }

    // Method to get the current balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    double initial_balance, withdrawal_amount;

    cout << "Enter initial balance: ";
    cin >> initial_balance;

    BankAccount account(initial_balance); // Create a BankAccount object

    cout << "Enter amount to withdraw: ";
    cin >> withdrawal_amount;

    account.withdraw(withdrawal_amount); // Attempt to withdraw

    return 0;
}
