#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    string name;
    string dept;
    string sub;
    double salary;


    void depChng(string newdept){
        dept = newdept;
    }

};
int main(){
    Teacher t1;
    Teacher t2;
    Teacher t3;
    Teacher t4;
    Teacher t5;
    t1.name = "Swaroop Sir";
    t1.dept = "Mathematics";
    t1.sub = "Math";
    t1.salary = 30000;
    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.salary << endl;
    cout << t1.sub << endl;
    t1.depChng("CS");
    cout << t1.dept << endl;


    return 0;
}
