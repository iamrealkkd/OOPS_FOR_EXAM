#include <iostream>
using namespace std;

class Student {
private:
    int age;   // Private variable

public:
    Student(int a) {   // Constructor
        age = a;
    }

    void show() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1(20);
    s1.show();

    return 0;
}
// =======================================
// Private Variables in C++
// =======================================
//
// 1. Private Variables
//
// - These variables can only be accessed inside the class.
// - They cannot be accessed directly from outside the class.
// - They are declared using the 'private' keyword.
// - They help in data hiding (encapsulation).
// - Access to private variables is usually provided
//   through public member functions (getters/setters).
//
// Example:
//
// class Example {
// private:
//     int x;   // private variable
// };
//