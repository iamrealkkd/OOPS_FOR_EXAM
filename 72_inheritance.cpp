#include<iostream>
using namespace std;

class Human{
public://if it is private or protected then it can't access by external code beacuse of the chat table of private > protected > public combinations 
    string name;
    int age, weight;
};
// class Student : public Human//we can inherit it protected and private also but in that particular case i have to use function to access the variables
// {
//     int roll, fees;
// };
class Student : protected Human// Humam inherit hua as a protected and agar base class private hota to hum use as a protected use nhi kr skte the inherit krke usme bhi hme as a private inherit krna pdega
{   
    private:
    int roll, fees;
    public:

    void fun(string n, int a, int w){
        name = n;
        age = a;
        weight = w;
    }
    void display()
    {
        cout << name <<" "<<age<<" "<< weight<<" ";
    }
};

int main(){

    Student A;
    A.fun("Rohit", 10, 60);
    A.display();
}