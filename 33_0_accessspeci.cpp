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