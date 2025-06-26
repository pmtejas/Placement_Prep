#include <bits/stdc++.h>
using namespace std;
// minimize maximum distance to gas station
long double minmaxGasDist(vector<int>& stations, int k) {
    int n = stations.size();
    sort(stations.begin(), stations.end());
    
    double low = 0.0, high = stations[n - 1] - stations[0];
    
    while (high - low > 1e-6) { // Precision threshold
        double mid = low + (high - low) / 2.0;
        int count = 0;
        
        for (int i = 1; i < n; i++) {
            double distance = stations[i] - stations[i - 1];// Calculate distance between consecutive stations
            count += ceil(distance / mid) - 1; // Count how many additional stations needed
        }
        
        if (count <= k) {
            high = mid; // Try to minimize the maximum distance
        } else {
            low = mid; // Increase the minimum distance
        }
    }
    
    return high;
}
int main() {
    vector<int> stations = {1, 13, 17, 23}; // Example gas station positions
    int k = 5; // Example number of additional stations allowed
    double result = minmaxGasDist(stations, k);
    cout << "The minimum maximum distance to a gas station is: " << result << endl;
    return 0;
}