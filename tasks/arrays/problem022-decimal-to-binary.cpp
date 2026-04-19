/* 
Problem 022

Description:
Converts a decimal number into a 20-bit binary representation.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[20] = {0}; 
    int n; 
 
    cin >> n; 
 
    int i = 19; 
 
    while(n > 0) 
    { 
        X[i] = n % 2; 
        n = n / 2; 
        i--; 
    } 
 
    for(int i = 0; i < 20; i++) 
    { 
        cout << X[i] << " "; 
    } 
 
    return 0; 
}