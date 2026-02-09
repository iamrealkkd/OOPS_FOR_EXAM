#include <iostream>
using namespace std;

class Bank {
private:
    int balance;   // hidden data

public:
    void setBalance(int b) {
        balance = b;
    }

    void showBalance() {
        cout << "Balance = " << balance;
    }
};

int main() {
    Bank b1;
    b1.setBalance(5000);
    b1.showBalance();
}
