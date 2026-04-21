/* 
Problem 033

Description:
Finds the minimum position, calculates average up to it, 
then stores values greater than 5 in a new array.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30], Y[30]; 
 
    for(int i = 0; i < 30; i++) 
        cin >> X[i]; 
 
    int min = X[0], pos = 0; 
    for(int i = 1; i < 30; i++) 
    { 
        if(X[i] < min) 
        { 
            min = X[i]; 
            pos = i; 
        } 
    } 
 
    int sum = 0, count = 0; 
    for(int i = 1; i <= pos; i++) 
    { 
        sum += X[i]; 
        count++; 
    } 
 
    cout << (double)sum / count << endl; 
 
    int j = 0; 
    for(int i = 1; i <= pos; i++) 
    { 
        if(X[i] > 5) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    for(int i = j; i < 30; i++) 
    { 
        Y[i] = 0; 
    } 
 
    for(int i = 0; i < 30; i++) 
        cout << Y[i] << " "; 
 
    return 0; 
}