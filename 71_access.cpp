#include<iostream>
using namespace std;
class Human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun(){// within the help of function we can access every class
        a = 10;
        b = 20;
        c = 30;
    }

};
int main(){
      Human Rohit;
      //Rohit.a = 10; Not Possible
      //Rohit.b = 11; Not Possible
      Rohit.c = 10; 
      Rohit.fun();
}