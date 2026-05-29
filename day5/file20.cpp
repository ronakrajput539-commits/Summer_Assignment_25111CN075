//WAP to find largest prime factor
#include<iostream>
using namespace std;
int main(){
    int n,largest=0;
    cout<<"enter a number";
    cin>>n;
    for (int i=2;i<=n;i++){
        while(n%i==0){
            largest=i;
            n/=i;

        }
    }
    cout<<"largest prime factor= "<<largest;
    return 0;
}