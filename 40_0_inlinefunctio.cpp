#include<iostream>
using namespace std;
inline add(int a, int b){
    return a+b;
}
int main(){
cout << add(5, 10);
return 0;//Inline function is a function in which the function call is replaced by function body during compilation time to reduce execution time
//It can't be used in big functions and recursionē
}