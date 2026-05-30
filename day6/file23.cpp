//wap to count set of bits in number
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    cout<<"number of bits = "<<count;
    return 0;
}