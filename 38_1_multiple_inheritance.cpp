#include<iostream>
using namespace std;
class  WaterVehicle{
    public:
    WaterVehicle(){
        cout << "Water Vehicle" << endl ;
    }
};
class LandVehicle{
    public:
    LandVehicle(){
        cout << "Land Vehicle" << endl ;
    }
};
class AmpVehicle:public WaterVehicle, LandVehicle{
    public:
    AmpVehicle(){
        cout << "Amp Vehicle" << endl ;
    }
};
int main(){
    AmpVehicle obj;

    return 0;
}