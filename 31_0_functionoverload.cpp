#include<iostream>
using namespace std;

    void swapping(int a, int b){
        cout << "Before Swapping The Values of int" << endl << "Value of a = " << a << endl << "Value of b = "<< b << endl;
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << "After Swapping The Values of int" << endl << "Value of a = " << a << endl << "Value of b = "<< b << endl;
    }
    void swapping(double a, double b){
        cout << "Before Swapping The Values of double" << endl << "Value of a = " << a << endl << "Value of b = "<< b << endl;
        double temp;
        temp = a;
        a = b;
        b = temp;
        cout << "After Swapping The Values of double" << endl << "Value of a = " << a << endl << "Value of b = "<< b << endl;
    
    }
int main(){
    swapping(4, 5);
    swapping(5.0, 4.2);
    return 0;
}