#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;

    Book(string t) {
        title = t;
        cout << "Book Created: " << title << endl;
    }

    ~Book() {
        cout << "Book Object Destroyed" << endl;
    }
};

int main() {
    Book b1("C++ Programming");
    return 0;
}
