/* 
Problem 053

Description:
Processes arrays by extracting group sums separated by -1, 
repeating them, and applying transformations using averages 
and conditional updates.
*/

#include <iostream>
using namespace std;

void findFromLast(int X[], int Y[], int n, int V)
{
    int i = n - 1;
    int totgrps[300];
    int g = 0;

    while(i >= 0 && g < V)
    {
        int tot = 0;

        while(i >= 0 && X[i] != -1)
        {
            tot += X[i];
            i--;
        }

        i--;

        totgrps[g] = tot;
        g++;
    }

    int j = 0;

    for(int k = 0; k < V; k++)
    {
        for(int t = 0; t < g; t++)
        {
            Y[j++] = totgrps[t];
        }
    }

    while(j < n)
    {
        Y[j++] = -1;
    }
}

int avgPositive(int A[], int n)
{
    int sum = 0, ct = 0;

    for(int i = 0; i < n; i++)
    {
        if(A[i] > 0)
        {
            sum += A[i];
            ct++;
        }
    }

    if(ct == 0) return 0;
    return sum / ct;
}

void addToNeg(int A[], int n, int val)
{
    for(int i = 0; i < n; i++)
    {
        if(A[i] < 0)
        {
            A[i] += val;
        }
    }
}

int main()
{
    int X[200], Y[200], Q[300], Z[300], W[200];
    int V;

    for(int i = 0; i < 200; i++) cin >> X[i];
    cin >> V;

    findFromLast(X, Y, 200, V);

    int a1 = avgPositive(Y, 200);

    addToNeg(Y, 200, a1);
    addToNeg(X, 200, a1);

    for(int i = 0; i < 300; i++) cin >> Q[i];

    findFromLast(Q, Z, 300, V);

    int a2 = avgPositive(Z, 300);
    int a3 = avgPositive(Q, 300);

    addToNeg(Q, 300, a2 + a3);
    addToNeg(Z, 300, a2 + a3);

    for(int i = 0; i < 200; i++) cin >> W[i];

    findFromLast(W, Y, 200, V);
    a1 = avgPositive(Y, 200);

    for(int i = 0; i < 200; i++) cin >> X[i];

    findFromLast(X, Y, 200, V);
    a2 = avgPositive(Y, 200);

    addToNeg(X, 200, a2 + a3);
    addToNeg(Y, 200, a2 + a3);

    for(int i = 0; i < 300; i++) cin >> Q[i];

    findFromLast(Q, Z, 300, V);

    for(int i = 0; i < 200; i++) cin >> Y[i];

    findFromLast(Y, W, 200, V);

    a1 = avgPositive(Z, 300);
    a2 = avgPositive(W, 200);

    addToNeg(Q, 300, a2 + a3);

    for(int i = 0; i < 200; i++) cin >> X[i];

    findFromLast(X, W, 200, V);

    a1 = avgPositive(W, 200);

    for(int i = 0; i < 200; i++) cin >> Y[i];

    findFromLast(Y, W, 200, V);

    return 0;
}