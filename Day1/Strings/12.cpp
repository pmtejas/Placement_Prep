#include <bits/stdc++.h>
using namespace std;
// Function to count substrings with exactly k distinct characters
// example: "abaaca", k = 1
// Output: 7
// Explanation: The substrings are: "a", "b", "a", "aa", "a", "c", "a".
long long int substrAtmostK(string s, int k) {
    long long int ans = 0;
    unordered_map<char, int> mp;
    int i = 0;
    for (int j = 0; j < s.size(); j++) {
        mp[s[j]]++;
        // If the size of the map exceeds k, we need to shrink the window
        while (mp.size() > k) {
            // Remove the character at index i from the map
            mp[s[i]]--;
            // If the count of the character becomes zero, remove it from the map
            if (mp[s[i]] == 0)
                mp.erase(s[i]);
            // Move the left pointer of the window to the right
            i++;
        }
        
        ans += j - i + 1;
    }
    return ans;
}
int main()
{
    string s = "abaaca";
    int k = 1;
    long long int result = substrAtmostK(s, k);
    cout << "Count of substrings with at most " << k << " distinct characters: " << result << endl;

    return 0;
}