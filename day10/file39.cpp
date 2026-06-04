/*
Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int k=i-1;k>=1;k--){
        cout<<k;
    }

cout<<endl;
    }
    return 0;
}