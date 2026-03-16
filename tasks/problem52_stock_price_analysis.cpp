/* Problem 52
   Read stock prices for 12 months.
   Count increases and decreases and calculate their averages.
*/

#include <iostream>
using namespace std;

int main()
{
    int prev, curr;
    int ct1 = 0, ct2 = 0;   // counts
    int ct3 = 0, ct4 = 0;   // sums
    int ave1, ave2;        // averages

    cin >> prev;

    for(int i = 1; i < 12; i++)
    {
        cin >> curr;

        if(curr > prev)
        {
            ct1++;
            ct3 += (curr - prev);
        }
        else if(curr < prev)
        {
            ct2++;
            ct4 += (prev - curr);
        }

        prev = curr;
    }

    ave1 = ct3 / ct1;   // average increase
    ave2 = ct4 / ct2;   // average decrease

    cout << ct1 << endl;
    cout << ct2 << endl;
    cout << ave1 << endl;
    cout << ave2 << endl;

    return 0;
}