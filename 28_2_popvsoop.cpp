#include <iostream>
#include<string>
using namespace std;

class Student{
   public:
   string name;
};
int main(){
   Student s1;
   s1.name = "Krishna";
   cout << s1.name << endl;
}

// ===============================================================
// Difference Between POP (Procedure Oriented Programming)
// and OOP (Object Oriented Programming System)
// ===============================================================
//
// -----------------------------------------------------------------------------
// Feature        | POP (Procedure Oriented Programming) | OOP (Object Oriented Programming)
// -----------------------------------------------------------------------------
// Full Form      | Stands for Procedure Oriented        | Stands for Object Oriented
//                | Programming.                         | Programming System.
// -----------------------------------------------------------------------------
// Approach       | Follows Top-Down approach.           | Follows Bottom-Up approach.
// -----------------------------------------------------------------------------
// Division       | Programs are divided into functions. | Programs are divided into
//                |                                      | classes and objects.
// -----------------------------------------------------------------------------
// Data &         | Data and functions are separate.     | Data and functions are
// Functions      |                                      | combined in a class.
// -----------------------------------------------------------------------------
// Security       | Less secure (uses global data).      | More secure (data hiding
//                |                                      | using encapsulation).
// -----------------------------------------------------------------------------
// Reusability    | Limited code reuse.                  | High code reuse using
//                |                                      | inheritance.
// -----------------------------------------------------------------------------
// Modeling       | Not suitable for real-world          | Easily models real-world
//                | modeling.                            | problems.
// -----------------------------------------------------------------------------
// Examples       | C                                    | C++, Java, Python
// -----------------------------------------------------------------------------