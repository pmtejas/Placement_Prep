#include<bits/stdc++.h>
using namespace std;
bool rotatedString(string s,string goal){
    if (s.size()!=goal.size())
    {
        return false;
    }
    string temp = s + s; // Concatenate the string with itself
    // Check if goal is a substring of the concatenated string
    return temp.find(goal) != string::npos;//explain this line
    //what is this means string::npos
    // string::npos is a constant representing the largest possible value for an element of type size_t.
    // It is used to indicate that a substring was not found.
}
int main()
{
    string s = "abcde";
    string goal = "deabc";
    if (rotatedString(s, goal))
    {
        cout << "Strings are rotations of each other" << endl;
    }
    else
    {
        cout << "Strings are not rotations of each other" << endl;
    }
    return 0;
}