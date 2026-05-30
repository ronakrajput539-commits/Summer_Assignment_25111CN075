//sum of n num
#include<iostream>
using namespace std;
int main() {
    int N,S=0;
    cout<<"Enter a number";
    cin>>N;
    for(int i=0;i<=N;i++){
        S+=i;
    }
    cout<<"sum of num"<<N<<"natural numbers ="<<S;
    return 0;
}