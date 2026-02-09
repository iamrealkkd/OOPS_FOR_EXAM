#include <iostream>
using namespace std;

// Abstract Base Class
class Base {
public:
    // Pure virtual function
    virtual void show() = 0;

    // Normal member function
    void display() {
        cout << "This is display function (Base class)" << endl;
    }
};

// Derived Class
class Derived : public Base {
public:
    // Implementation of pure virtual function
    void show() {
        cout << "This is show function (Derived class)" << endl;
    }
};

int main() {
    Base *ptr;        // Base class pointer
    Derived obj;      // Derived class object

    ptr = &obj;       // Base pointer points to derived object

    ptr->display();   // Calls Base class function
    ptr->show();      // Calls Derived class function (runtime polymorphism)

    return 0;
}
