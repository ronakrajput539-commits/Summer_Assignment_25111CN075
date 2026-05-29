//WAP to check perfect number
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
    cout<<"perfect num";
    else
    cout<<"not a perfect";
    return 0;
}
