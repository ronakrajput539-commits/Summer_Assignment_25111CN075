//WAP to print armstrong number in range
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,temp,rem,digit;
    double result;
    
    cout<<"enter number";
    cin>>n;
   
    temp=n;
    for(int i=1;i<=n;i++){

    
       int digit=0;
       int result=0;
         temp=i;
    while(temp!=0){
        temp/=10;
        digit++;

    }
    temp=i;
         while(temp!=0){
        rem=temp%10;
        result+=pow(rem,digit);
        temp/=10;
    }
    if(result==i){
        cout<<i<<" ";
    
    }
}
                        

   return 0;
    
}