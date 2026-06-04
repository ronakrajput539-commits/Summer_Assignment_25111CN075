/*
    Write a program to Print character pyramid. 
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
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
        cout<<(char)('A'+j-1);
    }
    for(int k=i-1;k>=1;k--){
        cout<<(char)('A'+k-1);
    }

cout<<endl;
    }
    return 0;
}