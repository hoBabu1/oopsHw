#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount() : accountNumber(0),
                    accountHolderName("N/A"), balance(0.0) {}

    BankAccount(int num, string name, double bal) : accountNumber(num),
                                                    accountHolderName(name), balance(bal) {}

    int getAccountNumber() const
    {
        return accountNumber;
    }
    void setAccountNumber(int num)
    {
        accountNumber = num;
    }
    string getAccountHolderName() const
    {
        return accountHolderName;
    }
    void setAccountHolderName(string name)
    {
        accountHolderName = name;
    }
    double getBalance() const
    {
        return balance;
    }
    void setBalance(double bal)
    {
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited $" << amount << " into account." << endl;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from account." << endl;
        }
        else
        {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }

    // Function to print account details
    void printAccountDetails() const
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount account1;
    BankAccount account2(123456, "Chandan", 1000.0);

    cout << "Account 1 details (default constructor):" << endl;
    account1.printAccountDetails();
    cout << endl;

    cout << "Account 2 details (parameterized constructor):" << endl;
    account2.printAccountDetails();
    cout << endl;

    account1.deposit(500.0);
    account1.printAccountDetails();
    cout << endl;

    account2.withdraw(200.0);
    account2.printAccountDetails();
    cout << endl;

    account2.withdraw(1500.0);
    account2.printAccountDetails();

    return 0;
}
