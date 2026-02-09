#include <iostream>
using namespace std;

int c = 0;

class Test {
public:
    // Constructor
    Test() {
        c++;
        cout << "No. of objects created: " << c << endl;
    }

    // Destructor
    ~Test() {
        cout << "No. of objects destroyed: " << c << endl;
        c--;
    }
};

int main() {
    Test t, t1, t2, t3;
    return 0;
}
