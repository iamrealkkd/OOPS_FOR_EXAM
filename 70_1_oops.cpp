#include<bits/stdc++.h>
using namespace std;
class Student
{
    string name;
    int age, roll;
    string grade;
    public://Getter and Setter
    void setname(string n){//Function name can be any
            name = n;          
    }
    void setage(int a){
            age = a;          
    }
    void setroll(int r){
            roll = r;          
    }
    void setgrade(string g){
            grade = g;          
    }

    void getname(){
        cout << "Name:"<< " " << name << endl;
    }
    void getage(){
        cout << "Age:"<< " " << age << endl;
    }
    void getroll(){
        cout << "Roll:"<< " " << roll << endl;
    }
    void getgrade(){
        cout<< "Grade:"<< " " << grade << endl;
    }
};
int main(){

    Student S1;
    S1.setname("Krishna");
    S1.setage(20);
    S1.setroll(29);
    S1.setgrade("A++");

    S1.getname();
    S1.getage();
    S1.getroll();
    S1.getgrade();
    

}