/* 
Problem 050

Description:
Counts occurrences of patterns (v1 v1 v2 v2) and (v2 v2 v1 v1) 
and finds the minimum value in the array.
*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int n, int v1, int v2) 
{ 
    int count = 0; 
 
    for(int i = 0; i < n - 3; i++) 
    { 
        if(X[i]==v1 && X[i+1]==v1 && X[i+2]==v2 && X[i+3]==v2) 
        { 
            count++; 
        } 
 
        if(X[i]==v2 && X[i+1]==v2 && X[i+2]==v1 && X[i+3]==v1) 
        { 
            count++; 
        } 
    } 
 
    int minVal = X[0]; 
    for(int i = 1; i < n; i++) 
    { 
        if(X[i] < minVal) 
        { 
            minVal = X[i]; 
        } 
    } 
 
    cout << "(" << count << ", " << minVal << ")" << endl; 
} 
 
int main() 
{ 
    int X[100], n, v1, v2; 
    cin >> n >> v1 >> v2; 
    for(int i = 0; i < n; i++) 
        cin >> X[i]; 
    solve(X, n, v1, v2); 
    return 0; 
}