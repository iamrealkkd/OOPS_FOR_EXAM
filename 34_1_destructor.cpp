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
// =======================================
// Destructor Overview in C++
// =======================================
//
// - A destructor has the same name as the class.
// - It is preceded by a tilde (~) symbol.
// - It is called automatically when an object is destroyed
//   (for example, when it goes out of scope).
// - It is mainly used to free memory or release resources.
// - A class can have only one destructor.
// - It does not take parameters and does not return a value.
//
// Example:
//
// class Example {
// public:
//     ~Example() {
//         cout << "Destructor called" << endl;
//     }
// };
//