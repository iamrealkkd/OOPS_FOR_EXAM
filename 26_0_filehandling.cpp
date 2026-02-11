#include <iostream>
#include<fstream>
#include<ifstream>
using namespace std;

int main(){
    //Create file
    ofstream Myfile("filename.txt");

    //Write to the file
    Myfile << "I am Krishna";

    //Close the file
    Myfile.close();
}