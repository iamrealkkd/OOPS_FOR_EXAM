#include <iostream>
using namespace std;

class A {
public:
    // Constructor
    A() {
        cout << "This is Constructor" << endl;
    }
};

int main() {
    A ob;   // Object creation (constructor will be called automatically)
    return 0;
}