#include <iostream>
using namespace std;

class Number {
public:
    void add(int a, int b) {
        cout << "Integer Sum: " << a + b << endl;
    }

    void add(float a, float b) {
        cout << "Float sum: " << a + b << endl;
    }
};

int main() {
    Number Ob;
    Ob.add(2, 3);
    Ob.add(2.5f, 3.5f);
    
    return 0;
}