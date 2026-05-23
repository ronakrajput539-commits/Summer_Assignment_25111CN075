//WAP to to find product of digit
#include<iostream>
using namespace std;

int main(){
    int n,prod=1,s;
    cout<<"enter number";
    cin>>n;
    while(n!=0){
        s=n%10;
        prod=prod*s;
        n=n/10;
    }
    cout<<"product of num="<<prod;
    return 0;

}