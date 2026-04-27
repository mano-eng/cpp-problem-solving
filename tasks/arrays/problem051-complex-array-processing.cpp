/* 
Problem 051

Description:
Processes arrays using multiple functions to extract negative segments,
count values based on conditions, and apply transformations across several blocks.
*/

#include <iostream>
using namespace std;

// CopyThoseNegative
void copyNeg(int a[], int n, int y[], int ySize)
{
    int posy = 0;
    int lastNeg = 0;
    int i = 0;

    while(i < n)
    {
        int sum = 0;
        int start = i;

        while(i < n && a[i] != -1)
        {
            if(a[i] < 0)
            {
                sum += a[i] * -1;
            }
            i++;
        }

        if(i < n && a[i] == -1)
        {
            if(sum > 100)
            {
                for(int j = start; j < i; j++)
                {
                    if(a[j] < 0)
                    {
                        y[posy] = a[j];
                        lastNeg = a[j];
                        posy++;
                    }
                }
            }
            i++;
        }
    }

    for(int i = posy; i < ySize; i++)
    {
        y[i] = lastNeg;
    }
}

int countAbsOver50(int a[], int n)
{
    int ct = 0;
    for(int i = 0; i < n; i++)
    {
        int val = a[i];
        if(val < 0)
        {
            val = val * -1;
        }
        if(val > 50)
        {
            ct++;
        }
    }
    return ct;
}

int countPositive(int a[], int n)
{
    int ct = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            ct++;
        }
    }
    return ct;
}

void addToAll(int a[], int n, int value)
{
    for(int i = 0; i < n; i++)
    {
        a[i] += value;
    }
}

int main()
{
    int X[200], Y[200], Q[300], Z[300];
    int a1, a2, a3;

    for(int i = 0; i < 200; i++)
    {
        cin >> X[i];
    }

    copyNeg(X, 200, Y, 200);
    a1 = countAbsOver50(Y, 200);
    a2 = countAbsOver50(X, 200);
    addToAll(Y, 200, a1 + a2);
    countPositive(Y, 200);

    for(int i = 0; i < 300; i++)
    {
        cin >> Q[i];
    }
    copyNeg(Q, 300, Z, 300);
    a3 = countAbsOver50(Z, 300);
    addToAll(Z, 300, a3 + a1);

    for(int i = 0; i < 200; i++)
    {
        cin >> X[i];
    }
    copyNeg(X, 200, Y, 200);
    countPositive(X, 200);
    a1 = countAbsOver50(Y, 200);
    a2 = countAbsOver50(X, 200);
    addToAll(Y, 200, a1 + a2);
    countPositive(Y, 200);

    for(int i = 0; i < 300; i++)
    {
        cin >> Q[i];
    }
    copyNeg(Q, 300, Z, 300);
    a3 = countAbsOver50(Z, 300);
    addToAll(Z, 300, a3 + a1 + a2);

    for(int i = 0; i < 200; i++)
    {
        cin >> X[i];
    }
    copyNeg(X, 200, Y, 200);

    for(int i = 0; i < 300; i++)
    {
        cin >> Q[i];
    }
    copyNeg(Q, 300, Z, 300);
    a3 = countAbsOver50(Z, 300);
    addToAll(Z, 300, a3 + a1 + a2);
    countPositive(Q, 300);

    for(int i = 0; i < 200; i++)
    {
        cin >> X[i];
    }
    copyNeg(X, 200, Y, 200);

    for(int i = 0; i < 300; i++)
    {
        cin >> Q[i];
    }
    copyNeg(Q, 300, Z, 300);

    return 0;
}