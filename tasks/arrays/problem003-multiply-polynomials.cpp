/* 
Problem 003

Description:
Reads two polynomials and prints their multiplication result 
by combining terms with the same power.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
    int n1, n2; 
     
    cout << "Enter number of terms for equation #1: "; 
    cin >> n1; 
     
    float coef1[100], pow1[100]; 
    cout << "Coefficients of equation #1: "; 
    for (int i = 0; i < n1; i++) cin >> coef1[i]; 
    cout << "Powers of equation #1: "; 
    for (int i = 0; i < n1; i++) cin >> pow1[i]; 
     
    cout << "Enter number of terms for equation #2: "; 
    cin >> n2; 
     
    float coef2[100], pow2[100]; 
    cout << "Coefficients of equation #2: "; 
    for (int i = 0; i < n2; i++) cin >> coef2[i]; 
    cout << "Powers of equation #2: "; 
    for (int i = 0; i < n2; i++) cin >> pow2[i]; 
     
    float coefR[100] = {0}; 
    float powR[100]  = {0}; 
    int   total      = 0; 
     
    for (int i = 0; i < n1; i++) { 
        for (int j = 0; j < n2; j++) { 
            float newCoef = coef1[i] * coef2[j]; 
            float newPow  = pow1[i]  + pow2[j]; 
             
            bool found = false; 
            for (int k = 0; k < total; k++) { 
                if (powR[k] == newPow) { 
                    coefR[k] += newCoef; 
                    found = true; 
                    break; 
                } 
            } 
            if (!found) { 
                coefR[total] = newCoef; 
                powR[total]  = newPow; 
                total++; 
            } 
        } 
    } 
     
    cout << "\nCoefficients of new equation: "; 
    for (int i = 0; i < total; i++) cout << coefR[i] << " "; 
     
    cout << "\nPowers of new equation:       "; 
    for (int i = 0; i < total; i++) cout << powR[i] << " "; 
     
    cout << endl; 
    return 0; 
}