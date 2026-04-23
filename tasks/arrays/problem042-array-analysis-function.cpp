/* 
Problem 042

Description:
Counts adjacent elements that satisfy a condition 
and counts the number of odd elements in the array.
*/

#include <iostream> 
using namespace std; 
 
void solve(int X[], int size) 
{ 
    int count = 0; 
    int odd = 0;   
 
    for(int i = 0; i < size; i++) 
    { 
        if(X[i] % 2 != 0) 
            odd++; 
 
        if(i < size - 1) 
        { 
            if((X[i+1] - X[i]) == i) 
                count++; 
        } 
    } 
 
    cout << "Count = " << count << endl; 
    cout << "Odd = " << odd << endl; 
} 
 
int main() 
{ 
    int X[100], n; 
 
    cin >> n; 
 
    for(int i = 0; i < n; i++) 
        cin >> X[i]; 
 
    solve(X, n); 
 
    return 0; 
}