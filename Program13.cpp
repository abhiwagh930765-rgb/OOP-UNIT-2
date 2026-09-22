#include <iostream>

class Account {
private:
    double balance;  // Private member cannot normally be accessed outside Account

    friend class Auditor;  // Auditor can access Account's private members

public:
    explicit Account(double initialBalance)
        : balance(initialBalance) {}  // Initialize account balance
};

class Auditor {
public:
    void inspect(const Account& account) const {
        // Friend class allows access to Account's private balance
        std::cout << "Account Balance: " << account.balance << '\n';
    }
};

int main() {
    Account account(5000.0);  // Create Account object with balance
    Auditor auditor;          // Create Auditor object

    auditor.inspect(account); // Auditor checks the account balance

    return 0;
}