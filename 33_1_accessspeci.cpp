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