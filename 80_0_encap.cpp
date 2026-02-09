#include <iostream>
using namespace std;

class Customer
{
private:
    string name;
    int account_number;
    int balance;
    int pin;

public:
    // Constructor
    Customer(string n, int acc, int bal, int p)
    {
        name = n;
        account_number = acc;
        balance = bal;
        pin = p;
    }

    // Deposit function
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Withdraw function
    void withdraw(int amount, int entered_pin)
    {
        if (entered_pin != pin)
        {
            cout << "Wrong PIN" << endl;
            return;
        }

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance or invalid amount" << endl;
        }
    }

    // Display function
    void display()
    {
        cout << name << " "
             << account_number << " "
             << balance << endl;
    }
};

int main()
{
    Customer A1("Rohit", 1, 1000, 3);
    Customer A2("Mohit", 2, 1800, 4);
    Customer A3("Mohan", 3, 2000, 5);

    A1.deposit(100);
    A1.withdraw(50, 3);
    A1.display();

    return 0;
}
