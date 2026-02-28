#include <iostream>
using namespace std;

class Parent {
protected:
    int x = 10;
};

class Child : public Parent {
public:
    void show() {
        cout << x << endl;   // Allowed (in derived class)
    }
};

int main() {
    Child c;
    c.show();
    return 0;
}
// =======================================
// Protected Variables in C++
// =======================================
//
// 3. Protected Variables
//
// - These variables can be accessed inside the class.
// - They can also be accessed by derived (child) classes.
// - They cannot be accessed directly from outside the class.
// - They are declared using the 'protected' keyword.
// - Mainly used in inheritance.
//
// Example:
//
// class Example {
// protected:
//     int x;   // protected variable
// };
//