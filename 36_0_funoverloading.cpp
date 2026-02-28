#include <iostream>
using namespace std;

class Number {
public:
    void add(int a, int b) {
        cout << "Integer Sum: " << a + b << endl;
    }

    void add(float a, float b) {
        cout << "Float sum: " << a + b << endl;
    }
};

int main() {
    Number Ob;
    Ob.add(2, 3);
    Ob.add(2.5f, 3.5f);
    
    return 0;
}
// =======================================
// Polymorphism in C++
// =======================================
//
// Definition:
// - Polymorphism means "many forms".
//
// Application:
// - It can be applied to functions and operators.
//
// Functionality:
// - A single function name can work differently
//   in different situations.
//
// Types of Polymorphism:
//
//                Polymorphism
//                       |
//           __________________________
//          |                          |
//   Compile Time               Runtime Polymorphism
//   Polymorphism                        |
//          |                     Function Overriding
//     _____|_____
//    |           |
// Function     Operator
// Overloading  Overloading
//
// =======================================
// =======================================
// Compile-Time Polymorphism in C++
// =======================================
//
// Definition:
// - Compile-time polymorphism is a type of polymorphism
//   where the function call is decided at compile time.
//
// Other Names:
// - It is also called Early Binding.
// - It is also known as Static Polymorphism.
//
// Achievement:
// - It is achieved using:
//     1. Function Overloading
//     2. Operator Overloading
//
// Meaning:
// - The compiler decides which function to call
//   before the program runs.
//
// =======================================