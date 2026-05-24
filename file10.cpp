//WAP prime num in a range
#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"enter starting numbeer";
    cin>>start;
    cout<<"enter ending number";
    cin>>end;
    
    for(int i=start;i<=end;i++){
        int count=0;
        if(i>1){
            for(int j=2;j<=end/2;j++){
                if(i%j==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                cout<<i<<" ";
            }
        }
    }
    return 0;

}