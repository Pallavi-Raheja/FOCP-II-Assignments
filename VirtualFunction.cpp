#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { cout << "Base Display" << endl; }
};

class Derived : public Base {
public:
    void display() { cout << "Derived Display" << endl; }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr->display(); // Calls Derived because of 'virtual'
    return 0;
}
