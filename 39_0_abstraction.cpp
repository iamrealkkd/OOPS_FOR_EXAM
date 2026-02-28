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
// =======================================
// Abstraction in C++
// =======================================
//
// - Abstraction means hiding internal implementation
//   details and showing only essential features.
//
// - It helps reduce complexity by focusing only
//   on important information.
//
// - It is achieved using abstract classes
//   and pure virtual functions in C++.
//
// =======================================