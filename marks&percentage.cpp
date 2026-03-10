#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int total=0;
    float percentage;
    cout<<"Enter marks of 5 subjects\n";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
        total+=arr[i];

    }
    percentage=total/5.0;
    cout<<"Total marks ="<<total<<endl;
    cout <<"Percentage ="<<percentage<<endl;
    return 0;
}
