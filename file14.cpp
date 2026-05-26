//WAP to find nth fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"enter a number";
    cin>>n;
    if(n==1)
    cout<<"nth fibonaccci term ="<<a;
    else if(n==2){
        cout<<" nth dibonacci term="<<b;

    }
    else {
        for (int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<"nth fibonacci term="<<b;

    }
    return 0;

}
