#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout << "Vehicle"<< endl;
    }
};
class FourWheeler: public Vehicle{
    public:
    FourWheeler(){
        cout << "Four Wheeler Vehicle"<< endl;
    }
};
class Car: public FourWheeler{
    public:
    Car(){
        cout << "Car"<< endl;
    }
};
int main(){
    Car obj;
    return 0;
}