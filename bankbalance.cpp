#include <iostream>
using namespace std;
/* creating bank -bankaccno and balance functions show balance deposit and withdrawl */
class bank{
  private:
  float balance=0;
  int accountno;
  public:
   void deposit(int amount ){
    balance =balance+amount ;
   }
   void withdrawal(int amount){
    balance=balance-amount;
   }
   void display(){
    cout<<"CURRENT BALANCE:"<<balance;
   }


};

int main(){
  int choice;
  bank b1;
  cout<<"CHOOSE"<<endl<<"1. Deposit "<<endl<<"2. Withdrawal"<<endl<<"3. Display Balance"<<endl;
  cin>>choice;
  if(choice==1){
    int amount;
    cout<<"Enter the amount";
    cin>>amount;
    b1.deposit(amount);
    cout<<"Balance updated;";

  }
  else if (choice==2){
     int amount;
    cout<<"Enter the amount";
    cin>>amount;
    b1.withdrawal(amount);
    cout<<"Balance updated;";

  }
  else{
    b1.display();
  }
return 0;
}
