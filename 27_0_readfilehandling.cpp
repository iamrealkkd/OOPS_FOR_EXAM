#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Read file
    ifstream MyFile("filename.txt");

    string text;

    // Read line from file
    getline(MyFile, text);

    // Print on screen
    cout << text;

    MyFile.close();
}
