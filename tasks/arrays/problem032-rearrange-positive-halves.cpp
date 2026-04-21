/* 
Problem 032

Description:
Moves positive elements from the second half first, 
then from the first half, and fills the rest with -1.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30], Y[30]; 
 
    for(int i = 0; i < 30; i++) 
    { 
        cin >> X[i]; 
    } 
 
    int j = 0; 
 
    for(int i = 15; i < 30; i++) 
    { 
        if(X[i] > 0) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    for(int i = 0; i < 15; i++) 
    { 
        if(X[i] > 0) 
        { 
            Y[j] = X[i]; 
            j++; 
        } 
    } 
 
    for(int i = j; i < 30; i++) 
    { 
        Y[i] = -1; 
    } 
 
    for(int i = 0; i < 30; i++) 
    { 
        cout << Y[i] << " "; 
    } 
 
    return 0; 
}