#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    void work()
    {
         cout << "I am Working\n";
    }
};

class Student : public Human
{
int roll, fees;
public :
Student(string name, int age, int roll, int fees){
    this->name = name;
    this->age = age;
    this->roll = roll;
    this->fees = fees;
}
void display(){
    cout << name << " " << age << " " << roll << " " << fees;
}
};

int main(){
Student A1("Krishna", 20, 29, 35000);
A1.display();
}