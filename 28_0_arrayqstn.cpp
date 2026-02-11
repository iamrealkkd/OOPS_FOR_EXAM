#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n = 10;
    int arr[n];
    int min = INT_MAX; 
    int max = INT_MIN;
    cout << "Enter 10 Elements : "<< endl;
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
    if(arr[i] > max){
        max = arr[i];
    }if(arr[i] < min){
        min = arr[i];
    }
    }
    cout << "Max Value is: " <<" " << max << endl;
    cout << "Min Value is: " <<" " << min;
    return 0; 
}
