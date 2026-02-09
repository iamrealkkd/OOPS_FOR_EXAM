#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int age;
    int roll;
    string grade;

public:
    // Constructor (initializes data members)
    Student() {
        name = "";
        age = 0;
        roll = 0;
        grade = "";
    }

    // Setters
    void setName(string n) {
        if (n.size() == 0) {
            cout << "Invalid Name" << endl;
            return;
        }
        name = n;
    }

    void setAge(int a) {
        if (a < 0 || a > 100) {
            cout << "Invalid Age" << endl;
            return;
        }
        age = a;
    }

    void setRoll(int r) {
        roll = r;
    }

    void setGrade(string g) {
        grade = g;
    }

    // Getters
    void getName() {
        cout << "Name: " << name << endl;
    }

    void getAge() {
        cout << "Age: " << age << endl;
    }

    void getRoll() {
        cout << "Roll: " << roll << endl;
    }

    void getGrade() {
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student S1;

    S1.setName("");        // Invalid
    S1.setAge(101);        // Invalid
    S1.setRoll(29);
    S1.setGrade("A++");

    S1.getName();
    S1.getAge();
    S1.getRoll();
    S1.getGrade();

    return 0;
}
