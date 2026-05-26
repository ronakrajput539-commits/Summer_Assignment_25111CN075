//WAP to generate fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,d;
    cout<<"enter number ";
    cin>>n;
    cout<<"fibonacci series";
    for(int i=1;i<=n;i++){
        cout<<a;
        d=a+b;
        a=b;
        b=d;

    }
    return 0;
}