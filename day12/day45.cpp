//Write a program to Write function for palindrome.

#include<iostream>
using namespace std;

int Palindrome(int n)
{
    int b,sum=0;
    int temp=n;
    while(n!=0){
        b=n%10;
        sum=sum*10+b;
        n=n/10;
    }
        return sum==temp;
    
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    if(Palindrome(n))
    cout<<"Palindrome";
    else
    cout<<"not palindrome";
    return 0;
}