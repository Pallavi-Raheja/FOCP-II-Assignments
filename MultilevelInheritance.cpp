#include <iostream>
using namespace std;

class Vehicle {
public:
    void info() { cout << "I am a vehicle" << endl; }
};

class Car : public Vehicle {
public:
    void wheels() { cout << "I have 4 wheels" << endl; }
};

class ElectricCar : public Car {
public:
    void battery() { cout << "I run on battery" << endl; }
};

int main() {
    ElectricCar tesla;
    tesla.info();
    tesla.battery();
    return 0;
}
