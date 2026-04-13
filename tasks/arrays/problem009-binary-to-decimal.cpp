/* 
Problem 009

Description:
Reads a binary number (20 bits) and converts it to decimal.
*/
#include <iostream>
using namespace std;

int main() {
    int arr[20];
    int rslt = 0, power = 1;

    cout << "Enter the Binary number: ";
    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
    }

    for (int i = 19; i >= 0; i--) {
        rslt += arr[i] * power;
        power *= 2;
    }

    cout << "The decimal number is : " << rslt;

    return 0;
}
