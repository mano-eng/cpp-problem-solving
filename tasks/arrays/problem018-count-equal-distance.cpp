/* 
Problem 018

Description:
Counts how many pairs of elements are equal 
with a given distance D between them.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
 
    int X[100]; 
    int D; 
 
    for(int i = 0; i < 100; i++) { 
        cin >> X[i]; 
    } 
 
    cin >> D; 
 
    int ct = 0; 
 
    for(int i = 0; i < 100 - D; i++) 
    { 
        if(X[i] == X[i + D]) 
        { 
            ct++; 
        } 
    } 
 
    cout << ct; 
 
    return 0; 
}