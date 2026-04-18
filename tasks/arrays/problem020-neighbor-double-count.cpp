/*
Problem 020

Reads n numbers, then counts how many elements are double their right neighbor
and how many are double their left neighbor, then prints both results.
*/

#include <iostream>  
using namespace std;  
  
int main() {  
  
    int X[100];  
    int n;  
  
    cin >> n;  
  
    // input  
    for(int i = 0; i < n; i++) {  
        cin >> X[i];  
    }  
  
    int ctRight = 0;  
    int ctLeft = 0;  
  
    // right neighbor  
    for(int i = 0; i < n - 1; i++) {  
        if(X[i] == 2 * X[i+1]) {  
            ctRight++;  
        }  
    }  
  
    // left neighbor  
    for(int i = 0; i < n; i++) {  
        if(i > 0 && X[i] == 2 * X[i-1]) {  
            ctLeft++;  
        }  
    }  
  
    cout << "Right = " << ctRight << endl;  
    cout << "Left = " << ctLeft << endl;  
  
    return 0;  
}