//Write a program to Recursive sum of digits.
#include<iostream>
using namespace std;

int digitSum(int n){
    if(n==0)
    return 0;
    return (n%10)+digitSum(n/10);
}

int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    
    cout<<"sim of digit = "<<digitSum(n);
    return 0;
}