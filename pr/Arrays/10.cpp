#include <bits/stdc++.h>
using namespace std;
vector<int>intersectionOfTwoSortedArray(vector<int>&nums1,vector<int>&nums2){
    int n1=nums1.size(),n2=nums2.size(),i=0,j=0;
    vector<int>intersectionArray;
    while (i<n1&&j<n2)
    {
        if (nums1[i]<nums2[j])
        {
            i++;
        }
        else if (nums1[i]>nums2[j])
        {
            j++;
        }
        else
        {
            intersectionArray.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return intersectionArray;
}
int main() {
    vector<int>nums1={1,2,3,4,5,6};
    vector<int>nums2={2,3,4,5,6,7,8};
    vector<int>res=intersectionOfTwoSortedArray(nums1,nums2);
    for (auto &&i : res)
    {
        cout<<i<<" ";
    }
    
    return 0;
}