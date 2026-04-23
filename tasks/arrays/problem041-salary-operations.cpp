/* 
Problem 041

Description:
Performs operations on employee salaries such as net salary, 
minimum salary, and modifying salaries based on conditions.
*/

#include <iostream> 
using namespace std; 
int main() 
{ 
    int X[30], choice; 
 
    for(int i = 0; i < 30; i++) 
        cin >> X[i]; 
 
    cin >> choice; 
 
    if(choice == 1) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            double tax = 0; 
 
            if(X[i] > 1000) 
                tax = X[i] * 0.20; 
            else if(X[i] > 500) 
                tax = X[i] * 0.10; 
            else if(X[i] > 200) 
                tax = X[i] * 0.05; 
 
            double net = X[i] - tax; 
            cout << net << " "; 
        } 
    } 
 
    else if(choice == 2) 
    { 
        int min = X[0]; 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] < min) 
                min = X[i]; 
        } 
 
        cout << min; 
    } 
 
    else if(choice == 3) 
    { 
        int min = X[0]; 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] < min) 
                min = X[i]; 
        } 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] > min + 30) 
                X[i] += 100; 
        } 
 
        for(int i = 0; i < 30; i++) 
            cout << X[i] << " "; 
    } 
 
    return 0; 
}