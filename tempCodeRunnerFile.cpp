#include<iostream>
#include<fstream>
using namespace std;
int main(){

    string readfile;
    ifstream Myfile("Krishna.txt");
    while(getline(Myfile, readfile)){
    cout << readfile;
   }
    Myfile.close();
}