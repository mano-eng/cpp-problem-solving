/* 
Problem 023

Description:
Distributes spaces between words to fit a given page width.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[40]; 
    int n; 
 
    cin >> n; 
 
    for(int i = 0; i < n; i++) 
    { 
        cin >> X[2*i]; 
        X[2*i + 1] = 1; 
    } 
 
    int size = 2 * n; 
 
    int page; 
    cin >> page; 
 
    int sum = 0; 
 
    for(int i = 0; i < size; i++) 
    { 
        sum += X[i]; 
    } 
 
    int diff = page - sum; 
 
    int spaces = n; 
 
    int add = diff / spaces; 
    int rem = diff % spaces; 
 
    for(int i = 1; i < size; i += 2) 
    { 
        X[i] += add; 
 
        if(rem > 0) 
        { 
            X[i]++; 
            rem--; 
        } 
    } 
 
    for(int i = 0; i < size; i++) 
    { 
        cout << X[i] << " "; 
    } 
 
    return 0; 
}