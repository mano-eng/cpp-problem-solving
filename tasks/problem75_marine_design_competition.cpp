#include <iostream>
using namespace std;

/*
Problem 75 - Marine Design Competition

Description:
This program processes data for N children participating in a design competition.

For each child:
- Reads age, duration, and number of attempts.
- For each attempt:
    * Type of design (1= pyramid, 2= sphinx, 3= chariot)
    * Number of stones
    * Dimensions (width, height, length)
    * Status (accepted or not)

The program does:
1) For each child with age > 9:
   - Calculates and displays the average number of stones
     used in sphinx designs only.

2) Finds the child with the minimum duration,
   and displays the largest accepted design (by volume).
*/

int main()
{
    int NK;
    cin >> NK;

    double min = 9999;
    double pos = 0;

    for (int i = 1; i <= NK; i++)
    {
        int age, NA;
        double dur;

        cin >> age >> dur >> NA;

        int ct = 0;
        double tot = 0;

        double max = -9999;

        for (int j = 1; j <= NA; j++)
        {
            int typ, Ns;
            double w, h, l;
            int isAcc;

            cin >> typ >> Ns;
            cin >> w >> h >> l;
            cin >> isAcc;

            // average for sphinx if age > 9
            if (age > 9 && typ == 2)
            {
                ct++;
                tot += Ns;
            }

            // volume
            double vol = w * h * l;

            if (isAcc == 1 && vol > max)
            {
                max = vol;
            }
        }

        // print avg for this child
        if (age > 9)
        {
            double avg = 0;
            if (ct != 0)
                avg = tot / ct;

            cout << avg << endl;
        }

        // minimum duration tracking
        if (dur < min)
        {
            min = dur;
            pos = max;   // نفس ستايل الدكتور
        }
    }

    cout << pos << endl;

    return 0;
}