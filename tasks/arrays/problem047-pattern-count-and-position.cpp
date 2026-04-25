/* 
Problem 047

Description:
Counts occurrences where v1 appears and v2 exists after 3 positions, 
and finds the first position of v1.
*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int n, int v1, int v2) { 
    int ct = 0, pos = 0, firstPos = 0; 
 
    for (int i = 0; i < n - 3; i++) { 
        
        if (X[i] == v1 && firstPos == 0) { 
            pos = i; 
            firstPos = 1; 
        } 

        if (X[i] == v1 && X[i+3] == v2) { 
            ct++; 
        } 
    } 
 
    cout << "(" << ct << ", " << pos << ")"; 
} 
 
int main() { 
    int X[100], n, v1, v2; 
    cin >> n; 
    for (int i = 0; i < n; i++) 
        cin >> X[i]; 
    cin >> v1 >> v2; 
    solve(X, n, v1, v2); 
    return 0; 
}