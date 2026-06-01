/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE
*/

#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    for(int i=0;i<n;i++){
       
        for(int j=0;j<=i+1;j++){
             char ch='A'+j;
            cout<<(ch)<< " ";
        }
        cout<<endl;
    }
    return 0;
}