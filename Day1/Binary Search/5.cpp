#include<bits/stdc++.h>
using namespace std;
int findFloor(vector<int>&nums,int target){
    int n=nums.size();
    int low=0,high=n-1,ans=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]<=target)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}
int findCeil(vector<int>&nums,int target){
    int n=nums.size();
    int low=0,high=n-1,ans=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
pair<int,int>findfloorAndCeil(vector<int>&nums,int target){
    int f=findFloor(nums,target);
    int c=findCeil(nums,target);
    return make_pair(f,c);
}
int main()
{
    vector<int>nums={1,2,4,5,6};
    int target=3;
    pair<int,int>res=findfloorAndCeil(nums,target);
    cout<<"Floor is at index: "<<res.first<<", Ceil is at index: "<<res.second<<endl;
    if (res.first != -1) {
        cout << "Floor value: " << nums[res.first] << endl;
    } else {
        cout << "No floor value found." << endl;
    }
    if (res.second != -1) {
        cout << "Ceil value: " << nums[res.second] << endl;
    } else {
        cout << "No ceil value found." << endl;
    }
    return 0;
}