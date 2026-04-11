#include <iostream>
using namespace std;

// This function finds the number of distinct prime factors
int countDistinctPrimeFactors(int n) {
    int count = 0;
    int temp = n;
    
    // Check for 2
    if (temp % 2 == 0) {
        count++;
        while (temp % 2 == 0) temp /= 2;
    }
    
    // Check for odd numbers up to sqrt(n)
    for (int i = 3; i * i <= temp; i += 2) {
        if (temp % i == 0) {
            count++;
            while (temp % i == 0) temp /= i;
        }
    }
    
    // If temp > 1, the remaining part is also a prime
    if (temp > 1) count++;
    
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int k = countDistinctPrimeFactors(n);
        long long ans = 1;
        for(int i = 0; i < k; i++) ans *= 2;
        
        cout << ans << endl;
    }
    return 0;
}
