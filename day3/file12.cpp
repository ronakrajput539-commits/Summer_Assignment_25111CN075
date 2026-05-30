//WAP to find LCM
#include<iostream>
using namespace std;
int main(){
    int a,b,lcm,gcd;
    cout<<"enter two number";
    cin>>a>>b;
    for (int i=1;i<=a&&i<=b;i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    cout<<"lcm="<<lcm;
    return 0;
}