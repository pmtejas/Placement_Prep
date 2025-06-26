#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int>&nums,int day,int adjFlowerK,int noFBoquets){
    int n=nums.size();
    int cnt=0;
    int numberOfBoquets=0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]<=day)
        {
            cnt++;
        }
        else
        {
            numberOfBoquets+=(cnt/noFBoquets);
            cnt=0;
        }    
    }
    numberOfBoquets+=(cnt/noFBoquets);
    return numberOfBoquets>=adjFlowerK;
}
int minimumNumberOfDaysToMakeMBouquet(vector<int>&nums,int nofboquets,int adjflowerk){
    int n=nums.size();
    long long val=nofboquets *1LL *adjflowerk * 1LL;
    if(val>n)return -1;
    int low=*min_element(nums.begin(),nums.end());
    int high=*max_element(nums.begin(),nums.end());
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (possible(nums,mid,adjflowerk,nofboquets))
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}
int main() {
    vector<int>nums={1,10,3,10,2};
    int nofboquets=3,adjflowerk=1; // Example values for nofboquets and adjflowerk
    int result=minimumNumberOfDaysToMakeMBouquet(nums,nofboquets,adjflowerk);
    cout << "The minimum number of days to make " << nofboquets << " bouquets is: " << result << " days." << endl; 
    
    return 0;
}