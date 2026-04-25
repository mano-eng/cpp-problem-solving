/* 
Problem 045

Description:
Swaps elements around consecutive equal values in the array.
*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int N) 
{ 
    for(int i = 1; i < N - 2; i++) 
    { 
        if(X[i] == X[i + 1]) 
        { 
            int temp = X[i - 1]; 
            X[i - 1] = X[i + 2]; 
            X[i + 2] = temp; 
 
            i++; 
        } 
    } 
} 
 
int main() 
{ 
    int X[100], N; 
 
    cin >> N; 
 
    for(int i = 0; i < N; i++) 
    { 
        cin >> X[i]; 
    } 
 
    solve(X, N); 
 
    for(int i = 0; i < N; i++) 
    { 
        cout << X[i] << " "; 
    } 
 
    return 0; 
}