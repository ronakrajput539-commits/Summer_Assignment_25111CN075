//WAP to check whether an number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime=true;
    cout<<"enter a number";
    cin>>n;
    if(n<=1){
        isprime=false;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if (n%1==0){
                isprime=true;
                break;
            }

        }
    }
    if(isprime)
    cout<<n<<" is a prime number";
    else
    cout<<n<<" not a prime";
    return 0;

}