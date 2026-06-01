/*Write a program to Print half pyramid pattern.
1
12
123
1234
12345 */
  
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<(j)<< " ";
        }
        cout<<endl;
    }
    return 0;
}