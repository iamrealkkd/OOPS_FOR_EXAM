#include <iostream>
using namespace std;

class Customer {
    string name;
    int bal;
    int acc;
    static int totac;

public:
    // Parameterized Constructor
    Customer(string name, int bal, int acc) {
        this->name = name;
        this->bal = bal;
        this->acc = acc;
        totac++;
        
    }
    void display(){
        cout << name << " " << bal << " " << acc << " "  << totac << endl;
    }
};
int Customer :: totac = 0;


int main() {
    Customer A1("Krishna", 500, 63250);
    Customer A2("Nikhlesh", 400, 85250);
    A1.display();
    A2.display();
    return 0;
}
