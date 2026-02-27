#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout << "Vehicle" << endl ;
    }
};
class Car: public Vehicle{
    public:
    Car(){
        cout << "Car" << endl;
    }
};
int main(){
    Car obj;

    return 0;
}