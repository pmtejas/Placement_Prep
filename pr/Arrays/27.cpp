#include <bits/stdc++.h>
using namespace std;
int generatePascal(int n,int r){
    int ans=1;
    for (int i = 0; i <r; i++)
    {
        ans=ans*(n-i);
        ans=ans/(i+1);
    }
    return ans;
}
int pascal(int row,int col){
    return generatePascal(row-1,col-1);
}
int main() {
    cout<<pascal(3,2);
    
    return 0;
}