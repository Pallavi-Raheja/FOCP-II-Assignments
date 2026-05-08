#include <iostream>
using namespace std;

class Box {
    int width;
public:
    Box() { width = 10; }
    friend void showWidth(Box b); 
};

void showWidth(Box b) {
    cout << "Width: " << b.width << endl;
}

int main() {
    Box myBox;
    showWidth(myBox);
    return 0;
}
