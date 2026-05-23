//multiplication table of given num
#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"enter number";
    cin>>num;
    cout<<"Multiplication Table of"<<num<<endl;

    for(int i=1;i<=10;i++){
        cout<<num<<"x"<<i<<"="<<num*i<<endl;

    }
    return 0;
}