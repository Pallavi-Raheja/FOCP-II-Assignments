#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    string name;
    // Updated prompt text
    cout << "Enter Name (at your own risk): ";
    getline(cin, name);

    // Witty roast templates using standard ASCII to avoid encoding issues
    vector<string> roasts = {
        "I'd agree with you, %s, but then we'd both be wrong.",
        "You're not the shortest person I know, %s, but you're definitely a 'brief' summary of a human.",
        "I'm jealous of all the people who haven't met you yet, %s.",
        "You possess a mind like a steel trap, %s - always closed and slightly rusty.",
        "If I gave you a penny for your thoughts, %s, I'd get change back.",
        "You're the reason they have to put instructions on shampoo bottles, %s.",
        "I'd love to insult you, %s, but I'm afraid I wouldn't do as good a job as nature already did.",
        "You're like a software update, %s. Whenever I see you, I think: 'Not now.'",
        "It's impressive, %s. You have the charisma of a damp paper towel.",
        "You're the human equivalent of a '404 Error: Not Found,' %s.",
        "I'd like to help you out, %s. Which way did you come in?",
        "You're like a WiFi signal in a basement, %s. Technically present, but ultimately useless."
    };

    // Random selection logic
    int randomIndex = rand() % roasts.size();
    string selectedRoast = roasts[randomIndex];

    // Replace %s with the input name
    size_t pos = selectedRoast.find("%s");
    if (pos != string::npos) {
        selectedRoast.replace(pos, 2, name);
    }

    // Output with a clean newline for better delivery
    cout << "\n" << selectedRoast << "\n" << endl;

    return 0;
}
