/* 
Problem 019

Description:
Checks matching elements from both ends 
and prints the first mismatch positions.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
 
    int X[100]; 
 
    for(int i = 0; i < 100; i++) { 
        cin >> X[i]; 
    } 
 
    int i = 0; 
    int k = 99; 
 
    while(i < k) 
    { 
        if(X[i] != X[k]) 
        { 
            break; 
        } 
 
        i++; 
        k--; 
    } 
 
    cout << i << " " << k; 
 
    return 0; 
}