#include <bits/stdc++.h>
using namespace std;
int minNumberOfFlips(int start,int goal){
    int flips = 0;
    for(int i = 0; i < 32; i++){
        if(((start >> i) & 1) != ((goal >> i) & 1)){
            flips++;
        }
    }
    return flips;
}
int main() {
    int start = 10; // 1010 in binary
    int goal = 7;   // 0111 in binary
    cout << "Minimum number of flips: " << minNumberOfFlips(start, goal) << endl;
    return 0;
}