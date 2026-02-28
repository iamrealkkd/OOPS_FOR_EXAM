#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s1;

    s1.setAge(20);
    cout << s1.getAge() << endl;

    return 0;
}
// =======================================
// Encapsulation Overview in C++
// =======================================
//
// Definition:
// - Encapsulation means wrapping data and member functions
//   together inside a class.
//
// Information Hiding:
// - It hides the internal details of the class from outside code.
//
// Data Protection:
// - Data members are usually declared private to protect them.
//
// Access Control:
// - Access to data is provided through public member functions,
//   mainly setters and getters.
//
// Security:
// - It improves data security by preventing direct access
//   to internal data.
//
// Significance:
// - It is one of the four main pillars of Object-Oriented Programming (OOPs).
//