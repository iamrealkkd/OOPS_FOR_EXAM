#include <iostream>
using namespace std;

class Car {
private:
    void engineStart() {   // hidden internal function
        cout << "Engine started internally" << endl;
    }

public:
    void start() {         // public function
        engineStart();     // calling private function
        cout << "Car started" << endl;
    }
};

int main() {
    Car obj;
    obj.start();   // allowed

    // obj.engineStart(); ❌ Not allowed (private)

    return 0;
}