/*
Problem 70 - Garden Analysis

Reads data for 30 gardens (pool + trees).
Finds the most expensive garden and counts pools with area > 20.
*/

#include <iostream>
using namespace std;

int main()
{
    int W, L, Ppol, t, Pt;
    int ct = 0, pos = 0;
    double S, cost, max = -9999;

    for(int i = 1; i <= 30; i++)
    {
        cin >> W >> L >> Ppol >> t >> Pt;

        S = W * L;
        cost = (Pt * t) + (Ppol * S);

        if(cost > max)
        {
            max = cost;
            pos = i;
        }

        if(S > 20)
            ct++;
    }

    cout << pos << endl;
    cout << ct << endl;

    return 0;
}
