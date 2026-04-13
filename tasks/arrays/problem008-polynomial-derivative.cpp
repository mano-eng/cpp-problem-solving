/* 
Problem 008

Description:
Reads a polynomial and computes its derivative.
*/

#include <iostream>
using namespace std;

int main() {
    int cf[100], p[100];
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Enter coefficients:\n";
    for(int i = 0; i < n; i++) {
        cin >> cf[i];
    }

    cout << "Enter powers:\n";
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for(int i = 0; i < n; i++) {
        cf[i] = cf[i] * p[i];
        p[i] = p[i] - 1;
    }

    cout << "New Coefficients:\n";
    for(int i = 0; i < n; i++) {
        cout << cf[i] << " ";
    }

    cout << "\nNew Powers:\n";
    for(int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }

    return 0;
}