#include <bits/stdc++.h>
using namespace std;
int floorSqrt(int n){
    int low=1,high=n;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        int val=mid*mid;
        if (val<=n)
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
    int n=16;
    int result=floorSqrt(n);
    cout << "The floor square root of " << n << " is: " << result << endl;
    
    return 0;
}