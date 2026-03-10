#include<iostream>
using namespace std;
class area{
  
    public:
        int  areaoftri( int length,int breadth){
            cout<<0.5*length*breadth;
            return 0;
        }   
};
int main(){
    int l,h;
    cout<<"enter length and height "<<endl;
    cin>>l>>h;
    area a1;
     a1.areaoftri(l,h);
    return 0;
}
