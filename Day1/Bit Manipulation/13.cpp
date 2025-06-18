#include <bits/stdc++.h>
using namespace std;
//  all divisors of a number
vector<int> allDivisors(int n) {
    vector<int> divisors;
    // Check for every number from 1 to sqrt(n)
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            // If divisors are not the same, add the complement divisor
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end()); // Sort the divisors
    return divisors;
}
int main() {
    int n = 12;
    vector<int> divisors = allDivisors(n);
    cout << "Divisors of " << n << " are: ";
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}