#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to check if a specific l can turn off all bulbs in <= K operations
bool canTurnOff(int l, int K, const string& bulbs, int N) {
    int operations = 0;
    for (int i = 0; i < N; ) {
        if (bulbs[i] == '1') {
            operations++;
            i += l; // Skip the range covered by the operation
        } else {
            i++;
        }
    }
    return operations <= K;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    string bulbs;
    cin >> bulbs;

    int low = 1, high = N;
    int ans = N;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canTurnOff(mid, K, bulbs, N)) {
            ans = mid;    // Try smaller l
            high = mid - 1;
        } else {
            low = mid + 1; // Need larger l
        }
    }

    cout << ans << endl;

    return 0;
}
