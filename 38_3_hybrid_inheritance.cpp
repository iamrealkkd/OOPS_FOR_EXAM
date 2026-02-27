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
class Fare: public FourWheeler{
    public:
    Fare(){
        cout << "Need Fair"<< endl;
    }
};
int main(){
    FourWheeler obj1;
    TwoWheeler obj2;
    Fare obj3 ;
    return 0;
}