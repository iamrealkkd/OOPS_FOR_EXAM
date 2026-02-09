#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num , first, last;
    cout << "Enter a number";
    cin >> num;
    last = num % 10;
    first = num / 100;
    int middle = first % 10;
    int sum = first + last + middle;
    cout << sum;

}