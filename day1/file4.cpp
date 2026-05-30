//count digit of n number
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number";
    cin>>n;
    while(n!=0){
        n=n/10;
        count++;

    }
    cout<<"num of digits="<<count;
    return 0;
}