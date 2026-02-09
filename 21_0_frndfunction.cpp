#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    Employee(int s) {
        salary = s;
    }

    friend void displaySalary(Employee emp);
};

// friend function definition
void displaySalary(Employee emp) {
    cout << "Salary = " << emp.salary;
}

int main() {
    Employee ob(50000);
    displaySalary(ob);
    return 0;
}
