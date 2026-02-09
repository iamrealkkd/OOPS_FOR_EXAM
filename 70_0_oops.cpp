#include<bits/stdc++.h>
using namespace std;
class Student
{
    public://By default private

    string name;
    int age, roll;
    string grade;
};
int main(){

    Student S1;
    S1.name = "Krishna";
    S1.age = 20;
    S1.roll =  29;
    S1.grade = "A++";

    cout << "Name:"<< " " << S1.name << endl;
    cout << "Age:" << " " << S1.age << endl;
    cout << "Roll:" << " " << S1.roll << endl;
    cout << "Grade:" << " " << S1.grade << endl;
}