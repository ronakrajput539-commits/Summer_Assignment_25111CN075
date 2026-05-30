//WAP TO CONVERT BINARY TO DECIMAL
#include <iostream>
using namespace std;
int main(){
    int binary,decimal=0,base=1,rem;
    cout<<"enter binary number";
    cin>>binary; 
    while(binary>0){
        rem=binary%10;
        decimal += rem* base;
        base*= 2;
        binary /=10;

    } 
    cout<<"decimal "<<decimal;
    return 0;

}