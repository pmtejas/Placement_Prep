#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    stringstream ss(s);
    string word, result;
    
    while (ss >> word) {
        reverse(word.begin(), word.end());
        result += word + " ";
    }
    
    if (!result.empty()) {
        result.pop_back(); // Remove the trailing space
    }
    
    return result;
}
int main()
{
    string s = "Hello World";
    string reversed = reverseWords(s);
    cout << "Reversed words: " << reversed << endl;

    return 0;
}