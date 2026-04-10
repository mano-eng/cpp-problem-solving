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
    int coef1[100], pow1[100];
    int coef2[100], pow2[100];
    int coefR[200] = {0};

    // إدخال المعادلة الأولى
    cout << "Enter number of terms for equation 1: ";
    cin >> n1;
    cout << "Enter coefficients: ";
    for (int i = 0; i < n1; i++) cin >> coef1[i];
    cout << "Enter powers: ";
    for (int i = 0; i < n1; i++) cin >> pow1[i];

    // إدخال المعادلة الثانية
    cout << "Enter number of terms for equation 2: ";
    cin >> n2;
    cout << "Enter coefficients: ";
    for (int i = 0; i < n2; i++) cin >> coef2[i];
    cout << "Enter powers: ";
    for (int i = 0; i < n2; i++) cin >> pow2[i];

    // الضرب المباشر
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            int newCoef = coef1[i] * coef2[j];
            int newPow  = pow1[i] + pow2[j];
            coefR[newPow] += newCoef;
        }
    }

    // الطباعة
    cout << "\nResult:\n";
    for (int i = 0; i < 200; i++) {
        if (coefR[i] != 0) {
            cout << coefR[i] << "x^" << i << " + ";
        }
    }

    return 0;
}
}
