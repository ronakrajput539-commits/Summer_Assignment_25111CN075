//WAP to show palindrome
#include<iostream>
using namespace std;

int main(){
    int n,rev=0,s,temp;
    cout<<"enter number";
    cin>>n;
    temp=n;
    while(n!=0){
        s=n%10;
        rev=rev*10+s;
        n=n/10;
    }
    if(rev=temp){
        cout<<"palindrome,";

    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}