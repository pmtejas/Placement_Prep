#include <bits/stdc++.h>
using namespace std;
void pascalRow(int n) {
    int ans=1;
    cout<<ans<<" ";
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i) / i;
        cout << ans << " ";
    }
}
int main() {
    pascalRow(2);
    
    return 0;
}