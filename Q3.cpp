#include <iostream>
using namespace std;
int main() {
	int a,b ;
	cin>>a>>b;
	int x=a;
	for(int i=a+1;i<=b;i++){
		 x=x^i;
	}	
	if(x%2==0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	return 0;
	}
