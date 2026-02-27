#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    // Default Constructor
    Car() {
        brand = "Toyota";   // default value
        cout << "Default Constructor Called" << endl;
    }
};

int main() {
    Car c1;   // Constructor called automatically

    cout << "Car Brand: " << c1.brand << endl;

    return 0;
}