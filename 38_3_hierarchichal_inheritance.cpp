#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout << "Vehicle ";
    }
};
class FourWheeler: public Vehicle{
    public:
    FourWheeler(){
        cout << "Four Wheeler"<< endl;
    }
};
class TwoWheeler: public Vehicle{
    public:
    TwoWheeler(){
        cout << "Two Wheeler"<< endl;
    }
};
int main(){
    FourWheeler obj1;
    TwoWheeler obj2;
    return 0;
}