/* 
Problem 043

Description:
Finds three consecutive odd numbers in array X, 
then counts zeros in array Y before and after that segment.
*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int Y[], int n) { 
    int pos = 0; 
 
    for (int i = 0; i < n - 2; i++) { 
        if (X[i] % 2 != 0 && X[i+1] % 2 != 0 && X[i+2] % 2 != 0) { 
            pos = i; 
            break; 
        } 
    } 
 
    int leftZeros = 0; 
    for (int i = 0; i < pos; i++) 
        if (Y[i] == 0) 
            leftZeros++; 
 
    int rightZeros = 0; 
    for (int i = pos + 3; i < n; i++) 
        if (Y[i] == 0) 
            rightZeros++; 
 
    cout << leftZeros << " , " << rightZeros << endl; 
} 
 
int main() { 
    int n; 
    cin >> n; 
 
    int X[100], Y[100]; 
 
    for (int i = 0; i < n; i++) 
        cin >> X[i]; 
 
    for (int i = 0; i < n; i++) 
        cin >> Y[i]; 
 
    solve(X, Y, n); 
 
    return 0; 
}