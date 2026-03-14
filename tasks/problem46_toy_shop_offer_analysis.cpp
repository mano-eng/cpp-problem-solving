/*
Problem 46: Toy Shop Offer Analysis

Description:
A toy shop sells 3 types of toys (A, B, C). In some days there is an offer:
if the customer buys A, B, and C, he pays only for A and B.
The program prints each customer bill, counts the days with offer,
and finds the largest daily income in the month.
*/

/*
Problem 46: Toy Shop Offer Analysis
*/

#include <iostream>
using namespace std;

int main()
{
    double pA, pB, pC;
    int A, B, C;

    char ofr;

    int NC;

    double bill;
    double dailyIncome;

    double max = -9999;

    int Ct = 0;

    for(int i = 1; i <= 30; i++)
    {
        cin >> pA >> pB >> pC;

        cin >> ofr;

        if(ofr == 'Y')
            Ct++;

        cin >> NC;

        dailyIncome = 0;

        for(int j = 1; j <= NC; j++)
        {
            cin >> A >> B >> C;

            if(ofr == 'Y' && A>0 && B>0 && C>0)
                bill = A*pA + B*pB;
            else
                bill = A*pA + B*pB + C*pC;

            cout << bill << endl;

            dailyIncome += bill;
        }

        if(dailyIncome > max)
            max = dailyIncome;
    }

    cout << Ct << endl;
    cout << max << endl;

    return 0;
}
