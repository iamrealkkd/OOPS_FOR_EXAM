#include<iostream>
using namespace std;

class Customer {
    string name;
    int account;
    int balance;
    int age;

public:
    // Default constructor
    Customer() {
        name = "Rohit";
        account = 82107;
        balance = 500;
        age = 0;
    }

    // Parameterized constructor
    Customer(string a, int b, int c) {
        name = a;
        account = b;
        balance = c;
        age = 0;
    }

    // Constructor overloading
    Customer(string name, int account) {
        this->name = name;
        this->account = account;
        balance = 0;
        age = 0;
    }

    // Inline constructor (initializer list)
    inline Customer(string a, int b, int c, int d)
        : name(a), account(b), balance(c), age(d) {}

    // Copy Constructor
    Customer(Customer &B) {
        name = B.name;
        account = B.account;
        balance = B.balance;
        age = B.age;
    }

    void display() {
        cout << name << " " << account << " " << balance << " " << age << endl;
    }
};

int main() {
    Customer A1;
    Customer A2("Krishna Baap", 50062, 100);
    Customer A3("Nikhlesh Pota", 502);
    Customer A4("Rathore Beta", 508, 65, 20);
    Customer A5(A4);   // Copy constructor

    A1.display();
    A2.display();
    A3.display();
    A4.display();
    A5.display();
}
