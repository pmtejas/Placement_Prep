#include <bits/stdc++.h>
using namespace std;
// prime factoriztion of a number using Sieve of Eratosthenes
vector<int> primeFactorization(int n) {
    vector<int> factors;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            // If i is a prime number, mark its multiples as non-prime
            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
            // Factor out all occurrences of the prime number i
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }
    }
    return factors;
}
int main() {
    int n = 100;
    vector<int> factors = primeFactorization(n);
    cout << "Prime factorization of " << n << " is: ";
    for (int f : factors) {
        cout << f << " ";
    }
    cout << endl;
    return 0;
}