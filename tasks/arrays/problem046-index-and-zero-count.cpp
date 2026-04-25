/* 
Problem 046

Description:
Counts how many elements are equal to their index 
and how many elements are zero.
*/

#include <iostream>
using namespace std;

void solve(int X[], int n) {
    int count = 0, zeros = 0;

    for (int i = 0; i < n; i++) {
        if (X[i] == i)   count++;
        if (X[i] == 0)   zeros++;
    }

    cout << count << " , " << zeros << endl;
}

int main() {
    int X[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> X[i];
    solve(X, n);
    return 0;
}