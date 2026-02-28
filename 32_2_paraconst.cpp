#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Krishna", 20);  // Arguments passed
    s1.show();
    return 0;
}
// 2. Parameterized Constructor
// Call: Automatically called when an object is created.

// Arguments: It takes arguments.

// Initialization: Initializes the object data members with user-given values.

// Requirement: You must pass arguments while creating objects for this constructor.