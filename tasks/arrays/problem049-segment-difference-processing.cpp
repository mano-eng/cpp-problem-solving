/* 
Problem 049

Description:
Generates array Z based on differences between segments of X using Y,
then modifies X and regenerates Z after applying transformations.
*/

#include <iostream>
using namespace std;

// ================== Generate Z ==================
void generateZ(int X[], int Y[], int Z[])
{
    int start = 0;

    for(int i = 0; i < 30; i++)
    {
        int sum1 = 0, sum2 = 0;

        for(int j = 0; j < Y[i]; j++)
        {
            sum1 += X[start++];
        }

        for(int j = 0; j < Y[i]; j++)
        {
            sum2 += X[start++];
        }

        Z[i] = sum1 - sum2;
    }
}

// ================== Fill Zero ==================
void fillZero(int Z[])
{
    for(int i = 0; i < 30; i++)
    {
        if(Z[i] == 0)
        {
            Z[i] = 0;
        }
    }
}

// ================== Absolute ==================
void makeAbs(int Z[])
{
    for(int i = 0; i < 30; i++)
    {
        if(Z[i] < 0)
        {
            Z[i] = Z[i] * -1;
        }
    }
}

// ================== Average ==================
int getAverage(int Z[])
{
    int sum = 0;

    for(int i = 0; i < 30; i++)
    {
        sum += Z[i];
    }

    return sum / 30;
}

// ================== Modify X ==================
void modifyX(int X[], int value)
{
    for(int i = 0; i < 100; i++)
    {
        if(X[i] % 2 != 0)
        {
            X[i] += value;
        }
    }
}

// ================== Sum second half ==================
int sumSecondHalf(int X[])
{
    int tot = 0;

    for(int i = 50; i < 100; i++)
    {
        tot += X[i];
    }

    return tot;
}

// ================== Sum first half ==================
int sumFirstHalf(int X[])
{
    int tot = 0;

    for(int i = 0; i < 50; i++)
    {
        tot += X[i];
    }

    return tot;
}

// ================== Sum Y ==================
int sumY(int Y[])
{
    int tot = 0;

    for(int i = 0; i < 30; i++)
    {
        tot += Y[i];
    }

    return tot;
}

// ================== Zero second half ==================
void zeroSecondHalf(int X[])
{
    for(int i = 50; i < 100; i++)
    {
        X[i] = 0;
    }
}

// ================== MAIN ==================
int main()
{
    int X[100], Y[30], Z[30];

    // قراءة X
    for(int i = 0; i < 100; i++)
    {
        cin >> X[i];
    }

    // قراءة Y
    for(int i = 0; i < 30; i++)
    {
        cin >> Y[i];
    }

    // ================== BLOCK 1 ==================
    generateZ(X, Y, Z);
    fillZero(Z);
    makeAbs(Z);

    int av = getAverage(Z);
    modifyX(X, av);

    // ================== BLOCK 2 ==================
    generateZ(X, Y, Z);
    fillZero(Z);

    int tot = sumSecondHalf(X);
    modifyX(X, tot);

    // ================== BLOCK 3 ==================
    for(int i = 0; i < 30; i++)
    {
        cin >> Y[i];
    }

    generateZ(X, Y, Z);
    makeAbs(Z);

    tot = sumY(Y);
    modifyX(X, tot);

    // ================== BLOCK 4 ==================
    for(int i = 0; i < 30; i++)
    {
        cin >> Y[i];
    }

    generateZ(X, Y, Z);
    makeAbs(Z);

    // ================== BLOCK 5 ==================
    for(int i = 0; i < 30; i++)
    {
        cin >> Y[i];
    }

    zeroSecondHalf(X);

    generateZ(X, Y, Z);
    makeAbs(Z);

    // ================== BLOCK 6 ==================
    zeroSecondHalf(X);

    tot = sumFirstHalf(X);
    modifyX(X, tot);

    generateZ(X, Y, Z);
    makeAbs(Z);

    // ================== OUTPUT ==================
    for(int i = 0; i < 30; i++)
    {
        cout << Z[i] << " ";
    }

    return 0;
}
