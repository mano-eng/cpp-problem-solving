/* 
Problem 030

Description:
Extracts neighbors of negative elements into new arrays 
and calculates averages.
*/

#include <iostream>  
using namespace std;  
  
int main() {  
    int X[30], Y[30];  
    int Q[60], W[60];  
  
    for (int i = 0; i < 30; i++) cin >> X[i];  
 
    for (int i = 0; i < 30; i++) Y[i] = -1;  
 
    int j = 0;  
    for (int i = 1; i < 29; i++)  
    {  
        if (X[i] < 0)  
        {  
            Y[j] = X[i-1];  
            Y[j+1] = X[i+1];  
            j += 2;  
        }  
    }  
 
    int sumY = 0;  
    for (int i = 0; i < 30; i++) sumY += Y[i];  
    cout << "Average of Y = " << sumY / 30.0 << endl;  
 
    for (int i = 0; i < 60; i++) cin >> Q[i];  
 
    for (int i = 0; i < 60; i++) W[i] = -1;  
 
    int k = 0;  
    for (int i = 1; i < 59; i++)  
    {  
        if (Q[i] < 0)  
        {  
            W[k] = Q[i-1];  
            W[k+1] = Q[i+1];  
            k += 2;  
        }  
    }  
 
    int sumQ = 0;  
    for (int i = 0; i < 60; i++) sumQ += Q[i];  
    cout << "Average of Q = " << sumQ / 60.0;  
 
    return 0;  
}