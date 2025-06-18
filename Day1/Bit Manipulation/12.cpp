#include <bits/stdc++.h>
using namespace std;
// prime factors of a number
vector<int> primeFactors(int n) {
    vector<int> factors;
    // Check for number of 2s that divide n
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    // This condition is to check if n is a prime number greater than 2
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}
int main() {
    vector<int> ans = primeFactors(2);
    for (auto &&i : ans) {
        cout << i << " ";
    }
    return 0;
}