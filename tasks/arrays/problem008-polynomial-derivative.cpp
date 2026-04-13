/* 
Problem 008

Description:
Reads a polynomial and computes its derivative.
*/

#include <iostream>
using namespace std;

int main() {
    int cf[100], p[100];
    
   
    for(int i = 0; i <100 ; i++) {
        cin >> cf[i];
    }
  
    for(int i = 0; i <100 ; i++) {
        cin >> p[i];
    }
    
    for(int i = 0; i <100; i++) {
        cf[i] = cf[i] * p[i];
        p[i] = p[i] - 1;
    }
    
    for(int i = 0; i < 100 ; i++) {
        cout << cf[i] << " ";
    }
    
    for(int i = 0; i < 100 ; i++) {
        cout << p[i] << " ";
    }

    return 0;
}
