#include <iostream>
using namespace std;

class Number {
private:
    int a, b;

public:
    // Default Constructor
    Number() {
        a = 0;
        b = 0;
    }

    // Parameterized Constructor (to support Number ob(-2, 6))
    Number(int x, int y) {
        a = x;
        b = y;
    }

    // Unary Operator Overloading
    void operator-() {
        a = -a;
        b = -b;
    }

    void display() {
        cout << a << ", " << b << endl;
    }
};

int main() {
    // Initializing object with values -2 and 6
    Number ob(-2, 6);

    // Using the overloaded unary minus operator
    -ob;

    // Displaying the result (should show 2, -6)
    ob.display();

    return 0;
}
// =======================================
// Operator Overloading in C++
// =======================================
//
// Definition:
// - C++ has the ability to provide operators
//   with special meanings for particular data types.
//
// Ability:
// - This ability is called Operator Overloading.
//
// Example:
// - The addition operator (+) can be used:
//     * To add two integers.
//     * To concatenate two strings.
//
// Meaning:
// - The same operator behaves differently
//   depending on the data type.
//
// =======================================