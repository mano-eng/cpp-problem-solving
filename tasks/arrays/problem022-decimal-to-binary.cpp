/* 
Problem 022

Description:
Converts a decimal number into a 20-bit binary representation.
*/

#include <iostream>
using namespace std;

int main() {
    int X[20] = {0};
    int n;
    cin >> n;

    for (int i = 19; n > 0; i--) {
        X[i] = n % 2;
        n = n / 2;
    }

    for (int i = 0; i < 20; i++)
        cout << X[i] << " ";

    return 0;
}
