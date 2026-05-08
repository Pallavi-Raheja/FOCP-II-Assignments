#include <iostream>
#include <string>
using namespace std;

class PrintData {
public:
    void show(int i) {
        cout << "Printing int: " << i << endl;
    }
    void show(string s) {
        cout << "Printing string: " << s << endl;
    }
};

int main() {
    PrintData pd;
    pd.show(50);
    pd.show("Hello OOP");
    return 0;
}
