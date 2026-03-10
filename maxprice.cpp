#include<iostream>
using namespace std ;
int main(){
    int arr[10];
    cout<<"enter item prices ";
    for(int i =0;i<=9;i++){
        cin>>arr[i];

    }
    int max=arr[0];
    for(int i =0;i<=9;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max no."<<max;
    return 0;
}
