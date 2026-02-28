#include <iostream>
#include<string>
using namespace std;

class Car {
public:
    string brand;

    // Default Constructor
    Car() {
        brand = "Toyota";   // default value
        cout << "Default Constructor Called" << endl;
    }
};

int main() {
    Car c1;   // Constructor called automatically
    cout << "Car Brand: " <<  endl;
    cout << c1.brand << endl;

    return 0;
}
// Constructor
// A constructor is a special member function of a class.

// Naming: It has the same name as the class.

// Execution: Automatically called when an object is created.

// Purpose: Used to initialize data members.

// Return Type: Does not have a return type.

// 1. Default Constructor
// Automatic Call: Called automatically when an object is created.

// Arguments: It does not take any arguments.

// Initialization: Initializes data members with default values.

// Compiler Role: If a programmer doesn't create any constructor, C++ provides a default constructor.