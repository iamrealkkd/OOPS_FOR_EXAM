#include<iostream>
using namespace std;
class Student{
    private:
    int pincode;
    public:
    Student(int p){
        pincode = p;
    }
    friend void showPin(Student s1);
};

    void showPin(Student s1){
        cout << s1.pincode;
    }

int main(){
    Student s1(832101);
    showPin(s1);
    return 0;
}
// ===============================
// Friend Function in C++
// ===============================
//
// A friend function is a function that is not a member of a class
// but is allowed to access the private and protected members of that class.
//
// It is declared using the keyword 'friend' inside the class.
//
// Key Points:
// - Declared inside the class using the 'friend' keyword.
// - Defined outside the class.
// - Not called using an object like normal member functions.
// - Can access private and protected data of the class.
//
// Why we use Friend Function?
// - When two or more classes need to share private data.
// - In operator overloading.
// - To provide controlled access to class data.
//
// Note:
// Friend function breaks data hiding, so it should be used carefully.


// ===============================
// Friend Class in C++
// ===============================
//
// A friend class is a class that is allowed to access
// the private and protected members of another class.
//
// It is declared using: friend class ClassName;
//
// Key Points:
// - Entire class gets access to private members.
// - All member functions of the friend class can access the data.
// - Friendship is one-way (not mutual).
// - Friendship is not inherited.
//
// Why we use Friend Class?
// - When one class needs full access to another class.
// - When two classes are closely related.
// - Used in complex data structures like linked lists and trees.


// ===============================
// Difference Between Friend Function and Friend Class
// ===============================
//
// Friend Function:
// - Only a specific function gets access.
// - Used for limited/specific access.
//
// Friend Class:
// - Entire class gets access.
// - Used when full access is required.


// ===============================
// Short Conclusion
// ===============================
//
// Friend functions and friend classes provide controlled access
// to private members of a class, increasing flexibility
// but slightly reducing encapsulation.
