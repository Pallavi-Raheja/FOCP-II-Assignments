#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << findMax(10, 20) << endl;     // Works with int
    cout << findMax(5.5, 2.1) << endl;   // Works with double
    return 0;
}
