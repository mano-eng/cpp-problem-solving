/* 
Problem 017

Description:
Counts how many pairs of consecutive elements are equal.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
 
    int X[100]; 
 
    for(int i = 0; i < 100; i++) { 
        cin >> X[i]; 
    } 
 
    int ct = 0; 
 
    for(int i = 0; i < 100; i += 2) 
    { 
        if(X[i] == X[i+1]) 
        { 
            ct++; 
        } 
    } 
 
    cout << ct; 
 
    return 0; 
}