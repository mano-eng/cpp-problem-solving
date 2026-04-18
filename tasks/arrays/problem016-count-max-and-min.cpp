/* 
Problem 016

Description:
Finds the maximum and minimum values 
and counts how many times each appears.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
 
    int X[100]; 
 
    for(int i = 0; i < 100; i++) { 
        cin >> X[i]; 
    } 
 
    int max = -9999; 
    for(int i = 0; i < 100; i++) { 
        if(X[i] > max) { 
            max = X[i]; 
        } 
    } 
 
    int min = 9999; 
    for(int i = 0; i < 100; i++) { 
        if(X[i] < min) { 
            min = X[i]; 
        } 
    } 
 
    int ctMax = 0; 
    int ctMin = 0; 
 
    for(int i = 0; i < 100; i++) { 
        if(X[i] == max) { 
            ctMax++; 
        } 
 
        if(X[i] == min) { 
            ctMin++; 
        } 
    } 
 
    cout << "Max count = " << ctMax << endl; 
    cout << "Min count = " << ctMin << endl; 
 
    return 0; 
}