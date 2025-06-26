#include <bits/stdc++.h>
using namespace std;
vector<int>UnionOfTwoSortedArrays(vector<int>&nums1,vector<int>&nums2){
    int n1=nums1.size(),n2=nums2.size(),i=0,j=0;
    vector<int>unionArray;
    while (i<n1&&j<n2)
    {
        if (nums1[i]<=nums2[j])
        {
            if (unionArray.empty()||unionArray.back()!=nums1[i])
            {
                unionArray.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.empty()||unionArray.back()!=nums2[j])
            {
                unionArray.push_back(nums2[j]);
            }
            j++;
        }
    }
    while (i<n1)
    {
        if (unionArray.empty()||unionArray.back()!=nums1[i])
        {
            unionArray.push_back(nums1[i]);
        }
        i++;
    }
    while (j<n2)
    {
        if (unionArray.empty()||unionArray.back()!=nums2[j])
        {
            unionArray.push_back(nums2[j]);
        }
        j++;
    }
    return unionArray;
}
int main() {
    vector<int>nums1={1,2,3,4,5,6};
    vector<int>nums2={2,3,4,5,6,7,8};
    vector<int>res=UnionOfTwoSortedArrays(nums1,nums2);
    for (auto &&i : res)
    {
        cout<<i<<" ";
    }
    
    return 0;
}