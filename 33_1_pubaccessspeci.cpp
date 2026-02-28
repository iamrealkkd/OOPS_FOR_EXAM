#include<iostream>
using namespace std;
class Student {
public:
    int age;   // Public variable
};

int main() {
    Student s1;
    s1.age = 20;   // Direct access allowed
    cout << s1.age;
}
// =======================================
// Public Variables in C++
// =======================================
//
// 2. Public Variables
//
// - These variables can be accessed from outside the class.
// - They are declared using the 'public' keyword.
// - They do not provide data hiding.
// - Any object of the class can directly access them.
// - Generally used when data does not need protection.
//
// Example:
//
// class Example {
// public:
//     int x;   // public variable
// };
//