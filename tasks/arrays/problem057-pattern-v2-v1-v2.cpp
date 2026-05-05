/* 
Problem 057

Description:
Counts occurrences of the pattern (V2, V1, V2) in the array 
and returns the last position of V1 in that pattern.
*/

#include <iostream> 
using namespace std; 
 
void func(int X[], int n, int V1, int V2, int &count, int &lastPos) 
{ 
    count = 0; 
    lastPos = 0; 
 
    for(int i = 0; i < n-2; i++) 
    { 
        if(X[i] == V2 && X[i+1] == V1 && X[i+2] == V2) 
        { 
            count++; 
            lastPos = i + 1; 
        } 
    } 
} 
 
int main() 
{ 
    int X[100], n, V1, V2; 
    int count, lastPos; 
 
    cin >> n; 
 
    for(int i = 0; i < n; i++) 
        cin >> X[i]; 
 
    cin >> V1 >> V2; 
 
    func(X, n, V1, V2, count, lastPos); 
 
    cout << count << " " << lastPos; 
 
    return 0; 
}