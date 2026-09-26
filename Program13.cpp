// Program 13: Demonstration of Friend Class

#include <iostream>
using namespace std;

// Account class
class Account
{
private:
    double balance;

    // Friend class declaration
    friend class Auditor;

public:
    // Constructor
    Account(double amount)
    {
        balance = amount;
    }
};

// Friend class
class Auditor
{
public:
    // Access private member
    void inspect(Account a)
    {
        cout << "Account Balance: " << a.balance << endl;
    }
};

int main()
{
    // Create Account object
    Account account(7500);

    // Create Auditor object
    Auditor auditor;

    // Inspect account
    auditor.inspect(account);

    return 0;
}
