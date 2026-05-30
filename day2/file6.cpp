//write a program to reverse number
#include<iostream>
using namespace std;

int main(){

    int n,rev=0,s;
    cout<<"enter number";
    cin>>n;
    while(n!=0){
        s=n%10;
        rev=rev*10+s;
        n=n/10;
        
    }
    cout<<"reverse of number ="<<rev;
    return 0;
}