#include<iostream>
using namespace std;
int main(){
    int num, original, rev = 0, remainder;
    cout<< "Enter the number" << " ";
    cin >> num;
    original = num;

    start:
    if(num != 0){
        remainder = num % 10;
        rev = rev * 10 + remainder; 
        num = num / 10;
        goto start;

    }
    if(original == rev){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
    return 0;
}