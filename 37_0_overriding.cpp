#include<iostream>
using namespace std;
class Base{
    public:
    void show(){
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
    Derived ob;
    ob.show();
    return 0;
}