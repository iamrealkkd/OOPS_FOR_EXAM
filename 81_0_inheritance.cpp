#include <iostream>
using namespace std;

class Human
{
private:
    int a;

protected:
    int b;

    void fun()
    {
        a = 10;
        b = 20;
        c = 30;
    }

public:
    int c;
};

// Derived class
class Student : public Human
{
public:
    void show()
    {
        fun();   // allowed (protected member)
        cout << "a cannot be accessed directly\n";
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main()
{
    Student s;
    s.show();
    return 0;
}
