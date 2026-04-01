/*
Problem 87 - Digit Parity Balance

Description:
The program reads an integer V and analyzes its digits.

It determines:
1) Splits the number into two halves based on digit count.
2) For the right half (least significant digits), counts how many digits are odd.
3) For the left half (most significant digits), counts how many digits are even.
4) Checks if:
   - All digits in the right half are odd.
   - All digits in the left half are even.

Finally, it prints:
- "TRUE" if both conditions are satisfied.
- "FALSE" otherwise.
*/

#include <iostream>
using namespace std;

int main()
{
    int V;
    cin >> V;

    int temp = V;
    int dig = 0;

    while(temp > 0)
    {
        temp /= 10;
        dig++;
    }

    int half = dig / 2;

    temp = V;

    int ctod = 0; // right (odd)
    int ctem = 0; // left (even)

    for(int i = 1; i <= dig; i++)
    {
        int d = temp % 10;

        if(i <= half && d % 2 == 1) // right side → odd
            ctod++;

        if(i > half && d % 2 == 0) // left side → even
            ctem++;

        temp /= 10;
    }

    if(ctod == half && ctem == half)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}