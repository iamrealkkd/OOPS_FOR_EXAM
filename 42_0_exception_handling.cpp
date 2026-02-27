#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter Two Numbers ";
    cin >> a >> b;
    try{
        if(b == 0){
            throw string("Division by 0 is not possible");
        }
        cout << "Result: " << a / b << endl; 
    }
    catch(string mssg){
        cout << "Exception Caught: " << mssg << endl;
    }
    return 0;
}
// Definition of Exception Handling in C++
//
// Exception Handling in C++ is a mechanism used to handle runtime errors
// so that the program does not terminate abnormally.
//
// It is implemented using three keywords: try, throw, and catch.
//
// - try block contains the code that may generate an error.
// - throw is used to generate an exception.
// - catch block is used to handle the exception.
//
// This mechanism allows the program to continue execution
// even after an error occurs.


// Explanation of Example
//
// In the above program:
//
// - The division operation is placed inside the try block.
// - If the denominator becomes zero, an exception is generated using throw.
// - The catch block catches the integer exception and displays an error message.
// - After handling the exception, the program continues execution normally.


// Short Exam Conclusion Line
//
// Thus, exception handling helps in managing runtime errors
// and prevents abnormal termination of the program.