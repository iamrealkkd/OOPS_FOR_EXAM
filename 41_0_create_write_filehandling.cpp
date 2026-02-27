#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // Create and open a text file
    ofstream Myfile("Krishna.txt");
    // Write to the file
    Myfile << "Hi I am Krishna Kumar Dutta";
    // Close the file
    Myfile.close();
}