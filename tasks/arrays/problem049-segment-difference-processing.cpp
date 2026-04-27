/* 
Problem 049

Description:
Generates array Z based on differences between segments of X using Y,
then modifies X and regenerates Z after applying transformations.
*/

#include <iostream>
using namespace std;

int main()
{
    int X[100], Y[30], Z[30];

    for(int i = 0; i < 100; i++)
    {
        cin >> X[i];
    }

    for(int i = 0; i < 30; i++)
    {
        cin >> Y[i];
    }

    int start = 0;
    int k = 0;

    for(int i = 0; i < 30; i++)
    {
        int sum1 = 0;
        int sum2 = 0;

        for(int j = 0; j < Y[i]; j++)
        {
            sum1 = sum1 + X[start];
            start = start + 1;
        }

        for(int j = 0; j < Y[i]; j++)
        {
            sum2 = sum2 + X[start];
            start = start + 1;
        }

        Z[k] = sum1 - sum2;
        k = k + 1;
    }

    for(int i = k; i < 30; i++)
    {
        Z[i] = 0;
    }

    for(int i = 0; i < 30; i++)
    {
        if(Z[i] < 0)
        {
            Z[i] = Z[i] * -1;
        }
    }

    int sumZ = 0;

    for(int i = 0; i < 30; i++)
    {
        sumZ = sumZ + Z[i];
    }

    int av = sumZ / 30;

    for(int i = 0; i < 100; i++)
    {
        if(X[i] % 2 != 0)
        {
            X[i] = X[i] + av;
        }
    }

    start = 0;
    k = 0;

    for(int i = 0; i < 30; i++)
    {
        int sum1 = 0;
        int sum2 = 0;

        for(int j = 0; j < Y[i]; j++)
        {
            sum1 = sum1 + X[start];
            start = start + 1;
        }

        for(int j = 0; j < Y[i]; j++)
        {
            sum2 = sum2 + X[start];
            start = start + 1;
        }

        Z[k] = sum1 - sum2;
        k = k + 1;
    }

    for(int i = 0; i < 30; i++)
    {
        if(Z[i] < 0)
        {
            Z[i] = Z[i] * -1;
        }
    }

    for(int i = 0; i < 30; i++)
    {
        cout << Z[i] << " ";
    }

    return 0;
}
