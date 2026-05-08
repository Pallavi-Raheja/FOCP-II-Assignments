#include <iostream>
using namespace std;

class Employee {
    int id;
public:
    Employee(int id) {
        this->id = id;
    }
    void show() { cout << "ID: " << id << endl; }
};

int main() {
    Employee e(555);
    e.show();
    return 0;
}
