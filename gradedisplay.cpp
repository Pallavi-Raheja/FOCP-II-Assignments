#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<("enter your marks");
    cin>>m;
    int a;
    a=m/10;
    switch(a){
        case 9 :
        cout<<("A grade"); 
        break;
         case 8:
         cout<<("A grade"); 
        break;
        case 7 :
         cout<<("B grade");
        break; 
        case 6 :
         cout<<("B grade"); 
        break;
        case 5 :
       cout<< ("C grade");
        break; 
        case 4 :
        cout<<("D+ grade");
        break;
         case 3 :
        cout<<("D grade");
        break;
         case 2 :
        cout<<("D grade");
        break;
         case 1 :
        cout<<("D grade");
        break;
        case 10:
        cout<<("A++ grade");
        
        
        

    }
return 0;
}
