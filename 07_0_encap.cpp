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

    Student *S = new Student;
    (*S).name = "Rohit";
    cout << S->name;//instead of dot opeartor I can use this
   
}