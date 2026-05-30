//find sum of digit of number
#include<iostream>
using namespace std;
int main(){
    int n,digit,s=0;
    cout<<"Enter a number";
    cin>>n;
    while(n!=0){
        digit=n%10;
        s+=digit;
        n=n/10;

    }
    cout<<"sum of digit ="<<s;
    return 0;
}
