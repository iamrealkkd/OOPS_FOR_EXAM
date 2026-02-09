#include<iostream>
using namespace std;
int main(){
    int num , first, last;
    cout << "Enter a number";
    cin >> num;
    last = num %10;
    first = num / 10;
    int sum = first + last;
    cout << sum;

}