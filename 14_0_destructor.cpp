#include <iostream>
using namespace std;

class Customer {
    string name;

public:
    // Parameterized Constructor
    Customer(string name) {
        this->name = name;
        cout << "constructor is " << name << endl;
    }

    // Destructor
    ~Customer() {
        cout << "Destructor is " << name << endl;
    }
};

int main() {
    Customer A1("1"), A2("2"), A3("3");
    return 0;
}
