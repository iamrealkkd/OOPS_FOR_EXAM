#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "This is a Constructor" << endl;
    }

    ~A() {
        cout << "This is a destructor" << endl;
    }
};

int main() {
    A obj; 

    return 0;
}