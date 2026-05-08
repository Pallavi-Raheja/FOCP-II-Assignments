#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("note.txt", ios::app);
    outFile << "\nThis is a new line.";
    outFile.close();
    return 0;
}
