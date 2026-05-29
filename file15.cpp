//WAP to check armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,rem,dig=0,temp;
    double result=0;

    cout<<"enter a number";
    cin>>n;
    temp=n;
    while(temp!=0){
        temp/=10;
        dig++;
    }
    temp=n;
    while(temp!=0){
        rem=temp%10;
        result+=pow(rem,dig);
        temp/=10;
    }
    if(result==n){
    cout<<n<<"is armstrong";
    }
    else {
    cout<<n<<"is not armstrong";
    }
    return 0;



}
