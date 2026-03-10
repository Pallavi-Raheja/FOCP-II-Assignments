#include<iostream>
using namespace std;
int area(int x,int y){
    return x*y;
}
int main(){
    int x,y;
cout<<"enter length and breadth ";
cin>>x;
cin>>y;
 int result=area(x,y);
cout<<"area of rectangle:"<<result;
return 0;
}
