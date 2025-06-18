#include <bits/stdc++.h>
using namespace std;
// Seive of Eratosthenes
// This function generates all prime numbers up to a given limit using the Sieve of Eratosthenes algorithm.
vector<int> sieveOfEratosthenes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;
    
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
    
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false; // Mark multiples of i as non-prime
            }
        }
    }
    
    return primes;
}
int main() {
    int limit = 100;
    vector<int> primes = sieveOfEratosthenes(limit);
    cout << "Prime numbers up to " << limit << " are: ";
    for (int p : primes) {
        cout << p << " ";
    }
    cout << endl;
    int count = primes.size();
    cout << "Total prime numbers found: " << count << endl;
    return 0;
}