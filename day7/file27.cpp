//Write a program to Recursive reverse number.
#include<iostream>
using namespace std;

int reverseNumber(int n,int rev=0){
    if(n==0)
    return rev;
    reverseNumber(n/10,rev*10+n%10);
}

int main(){
    int n;
    cout<<"Enter a number need to be Reversed";
    cin>>n;
    cout<<"Reverse number= "<<reverseNumber(n);
    return 0;


}