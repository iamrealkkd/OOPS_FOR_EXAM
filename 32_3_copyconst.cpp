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

    // Copy Constructor
    Student(Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called" << endl;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Krishna", 20);
    Student s2 = s1;   // Copy constructor called

    s2.show();
    return 0;
}
// 3. Copy Constructor
// Purpose: It creates a new object by copying data from an existing object.

// Parameters: It has parameters of the same class type (reference).

// Usage: One object is initialized using other objects.