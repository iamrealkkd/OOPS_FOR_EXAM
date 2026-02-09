#include<iostream>
#include<conio.h>
using namespace std;
class Student{
    private:
    string name;

    public:
    void setName(string s){
        name = s;
    }
     string getName(){
        return name;
    }

};
int main(){

    Student st;
    st.setName("Krishna");
    cout << st.getName();


}