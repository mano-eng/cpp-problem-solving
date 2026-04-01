/*
Problem 86 - Daily Vaccination Analysis

Description:
The program processes data for nD days.
For each day, it reads the number of records (cnt), then for each record reads age, VC, and VD.

It determines:
1) For each day, calculates the average age of people where VC > 0 and VD = 0.
2) Finds the day with the minimum total VD.
3) Counts how many times two consecutive days have the same number of records.

Finally, it prints:
- The average age for each day (or 0 if none).
- The position of the day with minimum VD.
- The count of consecutive days with equal record counts.
*/

#include <iostream>
using namespace std;

int main()
{
    int nD;
    cin >> nD;

    int minVD = 1000000000, pos = 0;
    int ct2 = 0; // contiguous days

    int prevCnt = 0;

    for(int i = 1; i <= nD; i++)
    {
        int cnt;
        cin >> cnt;

        int sumVD = 0;

        int sum = 0, ct = 0; // average per day

        for(int j = 1; j <= cnt; j++)
        {
            int age, VC, VD;
            cin >> age >> VC >> VD;

            sumVD += VD;

            if(VC > 0 && VD == 0)
            {
                sum += age;
                ct++;
            }
        }

        // minimum VD
        if(sumVD < minVD)
        {
            minVD = sumVD;
            pos = i;
        }

        // contiguous days
        if(i > 1 && cnt == prevCnt)
        {
            ct2++;
        }

        prevCnt = cnt;

        // average per day
        if(ct > 0)
            cout << (sum / ct) << endl;
        else
            cout << 0 << endl;
    }

    // day with minimum VD
    cout << pos << endl;

    // contiguous count
    cout << ct2 << endl;

    return 0;
}