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