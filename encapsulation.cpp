#include <iostream>
using namespace std;

class Bank {
private:
    double balance;

public:
    void setBalance(double b) {
        if (b >= 0) balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Bank myAcc;
    myAcc.setBalance(5000);
    cout << "Balance: " << myAcc.getBalance() << endl;
    return 0;
}
