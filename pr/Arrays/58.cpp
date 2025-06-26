#include <bits/stdc++.h>
using namespace std;
int bookAllocation(vector<int>& books, int student) {
    int n = books.size();
    if (n < student) return -1; // Not enough books for each student

    int low = *max_element(books.begin(), books.end()); // Minimum pages a student can read
    int high = accumulate(books.begin(), books.end(), 0); // Maximum pages a student can read
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int studentsRequired = 1, currentPages = 0;

        for (int i = 0; i < n; i++) {
            if (currentPages + books[i] > mid) {
                studentsRequired++;
                currentPages = books[i]; // Start new student's allocation
            } else {
                currentPages += books[i];
            }
        }

        if (studentsRequired <= student) {
            result = min(result, mid);
            high = mid - 1; // Try to minimize the maximum pages
        } else {
            low = mid + 1; // Increase the minimum pages
        }
    }
    return result;
}
int main() {
    vector<int> books = {25,46,28,49,24}; // Example book pages
    int student = 4; // Example number of students
    int result = bookAllocation(books, student);
    cout << "The minimum pages allocated to a student is: " << result << endl;
    return 0;
}