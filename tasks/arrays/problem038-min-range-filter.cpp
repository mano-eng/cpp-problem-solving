/* 
Problem 038

Description:
Finds minimum position, computes average up to it, 
and stores values greater than 5 in another array.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
    int X[30], Y[30]; 
 
    for (int i = 0; i < 30; i++) 
        cin >> X[i]; 
 
    for (int i = 0; i < 30; i++) 
        Y[i] = 0; 
 
    int min = X[0], pos = 0; 
    for (int i = 0; i < 30; i++) { 
        if (X[i] < min) { 
            min = X[i]; 
            pos = i; 
        } 
    } 
 
    int sum = 0, count = 0; 
    for (int i = 1; i <= pos; i++) { 
        sum += X[i]; 
        count++; 
    } 
    cout << (double)sum / count << endl; 
 
    int d = 0; 
    for (int i = 1; i <= pos; i++) { 
        if (X[i] > 5) { 
            Y[d] = X[i]; 
            d++; 
        } 
    } 
 
    for (int i = 0; i < 30; i++) 
        cout << Y[i] << " "; 
 
    return 0; 
}