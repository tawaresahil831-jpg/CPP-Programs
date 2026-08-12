#include<iostream>
using namespace std;

class savingaccount
{
private:
    string accountholdername;
    int accountnumber;
    double balance;
    double interestrate;

public:
    savingaccount(string name, int accnumber, double initialBalance, double rate)
    {
        accountholdername = name;
        accountnumber = accnumber;
        balance = initialBalance;
        interestrate = rate;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance..!!" << endl;
        }
    }

    void applyinterest()
    {
        double interest = balance * interestrate / 100;
        balance += interest;
        cout << "Interest applied: " << "₹" << interest << endl;
    }

    void display()
    {
        cout << "Account Number: " << accountnumber << endl;
        cout << "Account Holder: " << accountholdername << endl;
        cout << "Balance: " << "₹" << balance << endl;
        cout << "Interest rate: " << interestrate << "%" << endl;
    }
};

class checkingaccount
{
private:
    string accountholdername;
    int accountnumber;
    double balance;
    double transactionfee;

public:
    checkingaccount(string name, int accnumber, double initialBalance, double fee)
    {
        accountholdername = name;
        accountnumber = accnumber;
        balance = initialBalance;
        transactionfee = fee;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << "₹" << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        double total = amount + transactionfee;
        if (total <= balance)
        {
            balance -= total;
            cout << "Withdrawn: " << "₹" << amount << endl;
            cout << "Transaction Fee: " << "₹" << transactionfee << endl;
        }
        else
        {
            cout << "Insufficient balance..!! + Transaction Fee: " << "₹" << transactionfee << endl;
        }
    }

    void display()
    {
        cout << "\nChecking account details:" << endl;
        cout << "\nAccount Holder: " << accountholdername << endl;
        cout << "Account Number: " << accountnumber << endl;
        cout << "Balance: " << "₹" << balance << endl;
        cout << "Transaction Fee: " << "₹" << transactionfee << endl;
    }
};

int main()
{
    savingaccount saving("sahil", 123456, 1000.0, 5.0);
    saving.display();
    saving.deposit(500.0);
    saving.withdraw(200.0);
    saving.applyinterest();
    saving.display();

    checkingaccount checking("Big Boy", 654321, 2000.0, 2.5);
    checking.display();
    checking.deposit(300.0);
    checking.withdraw(100.0);
    checking.display();

    return 0;
}
