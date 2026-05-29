//WAP TO CHECK STRONG NUMBER
#include<iostream>
using namespace std;
int main(){
    int n , digit , temp ,sum=0;
    cout<<"enter a number";
    cin>>n;
    temp=n;
    while(temp!=0){
        digit=temp%10;
        int fact = 1;
        for (int i=1;i<=digit;i++){
            fact*=i;
        }
        sum += fact;
        temp/=10;
    }
    if(sum==n)
    cout<<"is a strong number";
    else
    cout<<"not a strong number";
    return 0;
}