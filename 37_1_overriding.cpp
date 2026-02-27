#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(){
        cout << "This is base class";
    }
};
    class Derived:public Base{
    public:
    void show(){
        cout << "This is Derived Class";
       }
    };
int main(){
    Base *ptr;
    Derived ob;
    ptr = &ob;
    ptr ->show();
    return 0;
}