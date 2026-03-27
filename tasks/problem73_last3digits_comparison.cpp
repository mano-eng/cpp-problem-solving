#include <iostream>
using namespace std;

/*
Description:
This program reads N numbers from the user.
It takes the first number and extracts its last 3 digits.
Then, it compares the remaining numbers with these digits
and counts how many values are greater than them.
Finally, it prints the count.
*/

int main()
{
    int N, dig, ct = 0, val;
    cin >> N;

    cin >> val;            // read first number
    dig = val % 1000;      // extract last 3 digits

    // loop through remaining numbers
    for (int i = 2; i <= N; i++)
    {
        cin >> val;

        // check if current value is greater than last 3 digits
        if (val > dig)
        {
            ct++;
        }
    }

    cout << ct;   // print result

    return 0;
}