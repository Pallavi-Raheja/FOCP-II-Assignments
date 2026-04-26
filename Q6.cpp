#include <iostream>
#include <unordered_map>
using namespace std;

class Bank {
private:
    unordered_map<int, int> accounts;

public:
    bool create(int X, int Y) {
        if (accounts.find(X) == accounts.end()) {
            accounts[X] = Y;
            return true;
        } else {
            accounts[X] += Y;
            return false;
        }
    }

    bool debit(int X, int Y) {
        if (accounts.find(X) == accounts.end() || accounts[X] < Y) {
            return false;
        }
        accounts[X] -= Y;
        return true;
    }

    bool credit(int X, int Y) {
        if (accounts.find(X) == accounts.end()) {
            return false;
        }
        accounts[X] += Y;
        return true;
    }

    int balance(int X) {
        if (accounts.find(X) == accounts.end()) {
            return -1;
        }
        return accounts[X];
    }
};

int main() {
    Bank bank;
    int Q;

    cout << "Enter number of queries: ";
    cin >> Q;

    while (Q--) {
        string operation;
        cout << "\nEnter operation (CREATE / DEBIT / CREDIT / BALANCE): ";
        cin >> operation;

        if (operation == "CREATE") {
            int X, Y;
            cout << "Enter User ID and Amount: ";
            cin >> X >> Y;

            bool result = bank.create(X, Y);
            cout << (result ? "New account created" : "User exists, amount added") << endl;
        }

        else if (operation == "DEBIT") {
            int X, Y;
            cout << "Enter User ID and Amount to debit: ";
            cin >> X >> Y;

            bool result = bank.debit(X, Y);
            cout << (result ? "Debit successful" : "Debit failed") << endl;
        }

        else if (operation == "CREDIT") {
            int X, Y;
            cout << "Enter User ID and Amount to credit: ";
            cin >> X >> Y;

            bool result = bank.credit(X, Y);
            cout << (result ? "Credit successful" : "Credit failed") << endl;
        }

        else if (operation == "BALANCE") {
            int X;
            cout << "Enter User ID: ";
            cin >> X;

            int bal = bank.balance(X);
            if (bal == -1)
                cout << "User not found" << endl;
            else
                cout << "Balance: " << bal << endl;
        }

        else {
            cout << "Invalid operation!" << endl;
        }
    }

    return 0;
}
