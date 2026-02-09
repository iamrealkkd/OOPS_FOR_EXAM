#include <iostream>
using namespace std;

int c = 0;   // global counter

class Test {
public:
    Test() {              // Constructor
        c++;
        cout << "No. of objects created: " << c << endl;
    }

    ~Test() {             // Destructor
        cout << "No. of objects destroyed: " << c << endl;
        c--;
    }
};

int main() {
    Test t, t1, t2, t3;
}
