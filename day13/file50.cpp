//Write a program to Find sum and average of array
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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int avg=sum/n;
    cout<<"sum of array="<<sum<<endl;
    
    cout<<"average of array="<<avg<<endl;
    return 0;
}
    
    