#include <iostream>
using namespace std;
int pyramid( int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            //space
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
    

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    pyramid(n);
}
//   *
//  ***
// *****
