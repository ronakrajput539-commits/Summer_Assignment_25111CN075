//Write a program to Write function to find maximum
#include<iostream>
using namespace std;
int Max(int a,int b){
    if(a>b)
       
        return a;
        else 
       
        return b;

    }
 int main (){
    int a ,b;
    cout<<"enter a number";
    cin>>a>>b;
     int result=Max(a,b);
            cout<<"maxima is"<<result;
           
    return 0;
 }