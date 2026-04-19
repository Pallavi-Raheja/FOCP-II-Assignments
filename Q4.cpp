#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string solve(int n, vector<int>& arr) {
    // Sort in descending order to prioritize larger piles
    sort(arr.begin(), arr.end(), greater<int>());
    
    int count[1001] = {0}; 
    
    long long alex = 0, bob = 0;
    bool alexTurn = true;
    
    for (int x : arr) {
        // We can pick this number if it has been picked less than 2 times
        if (count[x] < 2) {
            if (alexTurn) {
                alex += x;
            } else {
                bob += x;
            }
            
            // Mark this quantity as consumed one more time
            count[x]++;
            
            // Switch turns
            alexTurn = !alexTurn;
        }
    }
    
    // Determine the winner
    if (alex > bob) {
        return "Alex";
    } else {
        return "Bob";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    if (!(cin >> T)) return 0;
    
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << solve(n, arr) << "\n";
    }
    return 0;
}
