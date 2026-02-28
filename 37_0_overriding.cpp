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
// =======================================
// Run-Time Polymorphism in C++
// =======================================
//
// Other Names:
// - Also called Late Binding.
// - Also known as Dynamic Polymorphism.
//
// Definition:
// - In run-time polymorphism, the function call
//   is resolved at run time.
//
// - The decision of which function to execute
//   is made during program execution.
//
// =======================================


// =======================================
// Function Overriding in C++
// =======================================
//
// Definition:
// - Function overriding means a child class
//   redefines a function of the parent class.
//
// Requirement:
// - Both functions must have the same name.
// - Both functions must have the same parameters.
//
// Context:
// - It happens when inheritance is used.
// - It is an example of run-time polymorphism.
//
// =======================================