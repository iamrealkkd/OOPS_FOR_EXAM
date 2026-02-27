#include <iostream>
using namespace std;

class Parent {
protected:
    int x = 10;
};

class Child : public Parent {
public:
    void show() {
        cout << x << endl;   // Allowed (in derived class)
    }
};

int main() {
    Child c;
    c.show();
    return 0;
}