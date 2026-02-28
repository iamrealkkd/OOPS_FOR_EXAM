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
// Constructor
// A constructor is a crucial part of class-based programming in C++.

// Special Function: It is a special member function of a class.

// Naming: It has the same name as the class itself.

// Automatic Execution: It is automatically called when an object of the class is created.

// Purpose: It is used to initialize data members of the object.

// No Return Type: Constructors do not have a return type (not even void).