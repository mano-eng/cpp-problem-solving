/* 
Problem 039

Description:
Reads 30 temperatures and performs operations based on user choice.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30], choice; 
 
    for(int i = 0; i < 30; i++) 
        cin >> X[i]; 
 
    cin >> choice; 
 
    int min = X[0]; 
    for(int i = 1; i < 30; i++) 
    { 
        if(X[i] < min) 
            min = X[i]; 
    } 
 
    if(choice == 1) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] == min) 
                cout << i + 1 << " "; 
        } 
    } 
 
    else if(choice == 2) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] >= min && X[i] <= min + 5) 
                cout << i + 1 << " "; 
        } 
    } 
 
    else if(choice == 3) 
    { 
        int sum = 0; 
 
        for(int i = 0; i < 30; i++) 
            sum += X[i]; 
 
        double avg = (double)sum / 30; 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] > avg) 
                cout << i + 1 << " "; 
        } 
    } 
 
    return 0; 
}