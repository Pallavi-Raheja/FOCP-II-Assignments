#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("note.txt");
    outFile << "Hello World";
    outFile.close();
    return 0;
}
