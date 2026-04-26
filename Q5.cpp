#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class MovieTicketSystem {
private:
    // Map of MovieID -> Set of UserIDs who booked that movie
    unordered_map<int, unordered_set<int>> movieBookings;
    const int MAX_TICKETS = 100;

public:
    // BOOK X Y
    // Returns true if booking successful, false if full or already booked
    bool book(int userID, int movieID) {
        auto& bookedUsers = movieBookings[movieID];

        // Check if movie is full or user is already booked
        if (bookedUsers.size() >= MAX_TICKETS || bookedUsers.count(userID)) {
            return false;
        }

        bookedUsers.insert(userID);
        return true;
    }

    // CANCEL X Y
    // Returns true if cancellation successful, false if booking didn't exist
    bool cancel(int userID, int movieID) {
        // If the movie has no bookings, nothing to cancel
        if (movieBookings.find(movieID) == movieBookings.end()) {
            return false;
        }
        
        // erase returns 1 if element was found and removed, 0 otherwise
        return movieBookings[movieID].erase(userID) > 0;
    }

    // IS_BOOKED X Y
    // Returns true if booking exists, false otherwise
    bool isBooked(int userID, int movieID) {
        if (movieBookings.find(movieID) == movieBookings.end()) {
            return false;
        }
        return movieBookings[movieID].count(userID) > 0;
    }

    // AVAILABLE_TICKETS Y
    // Returns count of remaining tickets
    int availableTickets(int movieID) {
        if (movieBookings.find(movieID) == movieBookings.end()) {
            return MAX_TICKETS;
        }
        return MAX_TICKETS - movieBookings[movieID].size();
    }
};

int main() {
    // Optimization: Disconnect C++ streams from C stdio for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    MovieTicketSystem system;
    int Q;
    
    // Using flush ensures the text appears before the program pauses for input
    cout << "Enter Q: " << flush;
    cin >> Q;

    string command;
    int x, y;

    while (Q--) {
        cout << "Enter command: " << flush;
        cin >> command;

        if (command == "BOOK") {
            cin >> x >> y;
            cout << (system.book(x, y) ? "true" : "false") << "\n";
        } 
        else if (command == "CANCEL") {
            cin >> x >> y;
            cout << (system.cancel(x, y) ? "true" : "false") << "\n";
        } 
        else if (command == "IS_BOOKED") {
            cin >> x >> y;
            cout << (system.isBooked(x, y) ? "true" : "false") << "\n";
        } 
        else if (command == "AVAILABLE_TICKETS") {
            cin >> y;
            cout << system.availableTickets(y) << "\n";
        }
    }

    return 0;
}
