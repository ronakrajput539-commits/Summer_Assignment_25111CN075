//Write a program to Input and display array
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter element";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"element of arrays are";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}