#include <iostream>
#include <string>
#include <vector>
#include <ctime>   
#include <cstdlib> 

using namespace std;

int main() {
    // Initialize the random seed using the current time
    srand(static_cast<unsigned int>(time(0)));

    // List of 10 realistic excuses starting with a verb to follow the name
    vector<string> excuses = {
        " is unable to submit the task today due to a sudden hardware failure on their primary laptop.",
        " encountered a critical file corruption error during the final save of the assignment.",
        " is currently without internet access due to a local ISP service outage in their area.",
        " had their system crash during a mandatory OS update, resulting in temporary data loss.",
        " is dealing with an unexpected family emergency that requires their immediate presence.",
        " is currently waiting for a password reset from IT after being locked out of the student portal.",
        " is unwell and unable to complete the final documentation for today's deadline.",
        " found that their external storage device has malfunctioned and is currently unreadable.",
        " was affected by a local power surge that has temporarily disabled their workstation.",
        " is experiencing a software compatibility issue that is preventing the final file export."
    };

    string name;
    // Updated header as requested
    cout << "==========================================" << endl;
    cout << "            EXCUSE GENERATOR              " << endl;
    cout << "==========================================" << endl;

    while (true) {
        cout << "\nEnter name (or type 'exit' to quit): ";
        getline(cin, name);

        if (name == "exit" || name == "Exit") {
            break;
        }

        if (name.empty()) {
            cout << "Invalid input. Please enter a name." << endl;
            continue;
        }

        // Generate a random index based on the number of excuses in the list
        int index = rand() % excuses.size();

        // Print the personalized realistic excuse
        cout << "\nGenerated Statement:" << endl;
        cout << "------------------------------------------" << endl;
        cout << name << excuses[index] << endl;
        cout << "------------------------------------------" << endl;
    }

    return 0;
}
