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
// =======================================
// File Handling in C++
// =======================================
//
// - File handling is used to store data permanently
//   in files instead of temporary memory.
//
// - C++ provides <fstream> header file
//   to work with files.
//
// - ofstream (Output File Stream)
//   → Used to write data into a file.
//
// - ifstream (Input File Stream)
//   → Used to read data from a file.
//
// - fstream
//   → Used for both reading and writing in a file.
//
// Example:
//   #include <fstream>
//
//   ofstream outFile("data.txt");   // Writing
//   ifstream inFile("data.txt");    // Reading
//   fstream file("data.txt");       // Read & Write
//
// =======================================