/* 
Problem 037

Description:
Performs operations on array elements using the minimum value.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30]; 
 
    for(int i = 0; i < 30; i++) 
        cin >> X[i]; 
 
    int min = X[0]; 
    for(int i = 1; i < 30; i++) 
    { 
        if(X[i] < min) 
            min = X[i]; 
    } 
 
    int choice; 
    cin >> choice; 
 
    if(choice == 1) 
    { 
        cout << min; 
    } 
 
    else if(choice == 2) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            X[i] = X[i] + min; 
            cout << X[i] << " "; 
        } 
    } 
 
    else if(choice == 3) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            X[i] = X[i] - min; 
            cout << X[i] << " "; 
        } 
    } 
 
    return 0; 
}