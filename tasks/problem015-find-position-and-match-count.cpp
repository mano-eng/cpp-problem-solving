/* 
Problem 015

Description:
Finds the position of a value in array X, 
then counts matching elements with Y before that position.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
 
    int X[100], Y[100]; 
 
    for(int i = 0; i < 100; i++) { 
        cin >> X[i]; 
    } 
 
    for(int i = 0; i < 100; i++) { 
        cin >> Y[i]; 
    } 
 
    int val, pos; 
    cin >> val; 
 
    for(int i = 0; i < 100; i++) { 
        if(X[i] == val) { 
            pos = i; 
            break; 
        } 
    } 
 
    int ct = 0; 
 
    for(int i = 0; i < pos; i++) { 
        if(X[i] == Y[i]) { 
            ct++; 
        } 
    } 
 
    cout << "Position = " << pos << endl; 
    cout << "Count = " << ct << endl; 
 
    return 0; 
}