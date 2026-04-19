/* 
Problem 027

Description:
Performs different operations on array elements based on user choice.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30]; 
    int choice; 
 
    for(int i = 0; i < 30; i++) 
    { 
        cin >> X[i]; 
    } 
 
    cin >> choice; 
 
    if(choice == 1) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] % 2 != 0 && X[i] > 50) 
            { 
                cout << X[i] << " "; 
            } 
        } 
    } 
 
    else if(choice == 2) 
    { 
        int sum = 0; 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] % 2 != 0) 
            { 
                sum += X[i]; 
            } 
        } 
 
        cout << sum; 
    } 
 
    else if(choice == 3) 
    { 
        int sum = 0; 
        int count = 0; 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] % 2 != 0 && X[i] > 80) 
            { 
                sum += X[i]; 
                count++; 
            } 
        } 
 
        if(count > 0) 
            cout << sum / count; 
    } 
 
    return 0; 
}