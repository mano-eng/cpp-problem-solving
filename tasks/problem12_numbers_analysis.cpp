/*
Program: Numbers Analysis

Description:
This program reads three numbers from the user, displays the odd numbers,
calculates the average of the even numbers, and counts how many numbers
are divisible by 5.
*/
#include <iostream>
using namespace std;

int main()
{
    int N, ct1 = 0, ct2 = 0, sum = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> N;

        if(N % 2 != 0)
        {
            cout << N << endl;
        }
        else
        {
            sum += N;
            ct1++;
        }

        if(N % 5 == 0)
        {
            ct2++;
        }
    }

    if(ct1 != 0)
    {
        cout << "Average of even numbers = " << sum / ct1 << endl;
    }

    cout << "Numbers divisible by 5 = " << ct2 << endl;

    return 0;

}
