#include<iostream>
using namespace std ;
int main(){
    cout<<"enter 0 if you want to stop ";
    int sum=0;
    for (int i=0;i>=0;i++){
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        if(n>0){
            sum=sum+n;
        }
        else
        sum=sum+0;

    }
    cout<<sum;

}
