/* 
Problem 014

Description:
Finds the maximum and minimum sum of every 3 consecutive elements.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
 
    int X[100]; 
 
    for(int i = 0; i < 100; i++) { 
        cin >> X[i]; 
    } 
 
    int max = -9999; 
    int min = 9999; 
 
    for(int i = 0; i < 100; i += 3) { 
 
        int tot = X[i] + X[i+1] + X[i+2]; 
 
        if(tot > max) 
            max = tot; 
 
        if(tot < min) 
            min = tot; 
    } 
 
    cout << "Max = " << max << endl; 
    cout << "Min = " << min << endl; 
 
    return 0; 
}