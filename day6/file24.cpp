//WAP a program to find x^n without pow fxn.
#include <iostream>
using namespace std;
int main(){
    int x,n;
    long long result=1;
    cout<<"enter number and power";
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        result *=x;
    }
    cout<<x<<" ^"<<n<<"="<<result;
    return 0;
}