//WAP to find GCD OF two numbers
#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter a number";
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        if(a%i==0&& b%i==0){
            c=i;
        }
    }
    cout<<"gcd= "<<c;
    return 0;
}