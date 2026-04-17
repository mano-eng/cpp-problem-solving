/* 
Problem 012

Description:
Finds the minimum value and counts how many elements 
after it are divisible by it.
*/

#include <iostream>
using namespace std;

int main() {
    int X[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> X[i];
    }

    int min = X[0];
    int pos = 0;

    for(int i = 1; i < n; i++) {
        if(X[i] < min) {
            min = X[i];
            pos = i;
        }
    }

    int count = 0;

    for(int i = pos + 1; i < n; i++) {
        if(X[i] % min == 0) {
            count++;
        }
    }

    cout << "Minimum = " << min << endl;
    cout << "After = " << count << endl;

    return 0;
}