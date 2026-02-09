#include <iostream>
using namespace std;

class Base
{
public:
    int pub = 1;

protected:
    int prot = 2;

private:
    int priv = 3;
};

// PUBLIC inheritance
class PublicDerived : public Base
{
public:
    void show()
    {
        cout << "PublicDerived:\n";
        cout << pub << endl;   // Public → Public
        cout << prot << endl;  // Protected → Protected
        // cout << priv;       // ❌ Not accessible
    }
};

// PROTECTED inheritance
class ProtectedDerived : protected Base
{
public:
    void show()
    {
        cout << "ProtectedDerived:\n";
        cout << pub << endl;   // Public → Protected
        cout << prot << endl;  // Protected → Protected
        // cout << priv;       // ❌ Not accessible
    }
};

// PRIVATE inheritance
class PrivateDerived : private Base
{
public:
    void show()
    {
        cout << "PrivateDerived:\n";
        cout << pub << endl;   // Public → Private
        cout << prot << endl;  // Protected → Private
        // cout << priv;       // ❌ Not accessible
    }
};

int main()
{
    PublicDerived p;
    p.show();
    cout << p.pub << endl;     // ✅ accessible
    // cout << p.prot;         // ❌ not accessible

    ProtectedDerived pr;
    pr.show();
    // cout << pr.pub;         // ❌ not accessible

    PrivateDerived pv;
    pv.show();
    // cout << pv.pub;         // ❌ not accessible

    return 0;
}
