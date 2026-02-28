#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout << "Vehicle + " ;
    }
};
class Car: public Vehicle{
    public:
    Car(){
        cout << "Car" << endl;
    }
};
int main(){
    Car obj;

    return 0;
}
// =======================================
// Inheritance in C++
// =======================================
//
// Definition:
// - Inheritance means one class takes properties
//   (data and functions) of another class.
//
// Base Class:
// - The class that gives properties is called
//   the Base Class (Parent Class).
//
// Derived Class:
// - The class that receives properties is called
//   the Derived Class (Child Class).
//
// Benefit:
// - Helps in code reusability.
// - Avoids writing the same code again and again.
//
// Syntax:
// - In C++, inheritance is written using the colon (:) symbol.
//
// Example:
//   class Child : public Parent {
//
//   };
//
// =======================================
// Types of Inheritance
// =======================================
//
// 1. Single Inheritance
//    - One child class inherits from one base class.
//
// 2. Multiple Inheritance
//    - One child class inherits from more than one base class.
//
// 3. Multilevel Inheritance
//    - A class inherits from a class that already
//      inherits from another class.
//
// 4. Hierarchical Inheritance
//    - Multiple child classes inherit from one base class.
//
// 5. Hybrid Inheritance
//    - Combination of two or more types of inheritance.
//
// =======================================