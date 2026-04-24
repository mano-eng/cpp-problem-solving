/* 
Problem 044

Description:
Counts negative numbers and calculates the sum 
of the last 3 negative elements.
*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int n) { 
    int ctneg = 0, sum = 0, ct = 0; 
 
    for (int i = 0; i < n; i++) 
        if (X[i] < 0) 
            ctneg++; 
 
    for (int i = n-1; i >= 0; i--) 
        if (X[i] < 0 && ct < 3) { 
            sum += X[i]; 
            ct++; 
        } 
 
    cout << ctneg << endl; 
    cout << sum << endl; 
} 
 
int main() { 
    int X[100], n; 
    cin >> n; 
    for (int i = 0; i < n; i++) 
        cin >> X[i]; 
    solve(X, n); 
    return 0; 
}