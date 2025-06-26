#include <bits/stdc++.h>
using namespace std;
bool canwePlace(vector<int>&stalls,int dist,int k){
    int n=stalls.size();
    int cntcows=1;
    int last=stalls[0];
    for (int i = 1; i < n; i++)
    {
        if (stalls[i]-last>=dist)// Check if the current stall is far enough from the last placed cow
        {
            cntcows++;// Place a cow in the current stall
            last=stalls[i];// Update the last placed cow's position
        }
        if(cntcows>=k)return true;// If we have placed all k cows, return true
    }
    return false;
}
int agressiveCows(vector<int>&stalls,int k){
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=1,high=stalls[n-1]-stalls[0];
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (canwePlace(stalls,mid,k)==true)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return high;
}
int main() {
    vector<int> stalls = {1, 2, 8, 4, 9}; // Example stall positions
    int k = 3; // Example number of cows
    int result = agressiveCows(stalls, k);
    cout << "The largest minimum distance is: " << result << endl;
    return 0;
}