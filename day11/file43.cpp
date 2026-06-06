//Write a program to Write function to check prime

#include<iostream>
using namespace std;

int CheckPrime(int a){
    if (a<=1){
        return 0;
 }
 for  (int i=2;i<a;i++){
    if(a%i==0){
        return 0;
    }
 }
 return 1;
 }
 int main(){
    int a;
    cout<<"enter number";
    cin>>a;
    if(CheckPrime(a))
    cout<<"prime";
    else
    cout<<"not prime";
    return 0;
 }