/* 
Problem 056

Description:
Generates arrays based on even values within a specific odd-index range,
then performs average calculations and applies transformations on multiple arrays.
*/

#include <iostream>
using namespace std;

void generate(int X[], int Y[], int n)
{
    int frstodd, lstodd;

    for(int i = 0; i < n; i++)
    {
        if(i % 2 != 0 && X[i] % 2 != 0)
        {
            frstodd = i;
            break;
        }
    }

    for(int i = n-1; i >= 0; i--)
    {
        if(i % 2 != 0 && X[i] % 2 != 0)
        {
            lstodd = i;
            break;
        }
    }

    int j = 0, k = 1;

    for(int i = frstodd; i <= lstodd; i++)
    {
        if(X[i] % 2 == 0)
        {
            for(int t = 0; t < k && j < n; t++)
                Y[j++] = X[i];
            k++;
        }
    }

    while(j < n)
        Y[j++] = -1;
}

float avgEven(int A[], int B[], int n)
{
    int sum = 0, ct = 0;

    for(int i = 0; i < n; i++)
    {
        if(A[i] % 2 == 0 && B[i] % 2 == 0)
        {
            sum += A[i] + B[i];
            ct += 2;
        }
    }

    if(ct == 0) return 0;
    return (float)sum / ct;
}

void addSecondHalf(int A[], int n, float val)
{
    for(int i = n/2; i < n; i++)
        A[i] += val;
}

int main()
{
    int X[200], Y[200], W[200];
    int Q[600], Z[600];

    float a1, a2;

    for(int i = 0; i < 200; i++) cin >> X[i];

    generate(X, Y, 200);

    a1 = avgEven(X, Y, 200);

    addSecondHalf(Y, 200, a1);
    addSecondHalf(X, 200, a1);

    for(int i = 0; i < 600; i++) cin >> Q[i];

    generate(Q, Z, 600);

    addSecondHalf(Z, 600, a1);

    a1 = avgEven(Q, Y, 200);

    addSecondHalf(Z, 600, a1);

    for(int i = 0; i < 200; i++) cin >> W[i];

    generate(W, Y, 200);

    for(int i = 0; i < 200; i++) cin >> X[i];

    generate(X, W, 200);

    a1 = avgEven(W, Y, 200);
    a2 = avgEven(X, W, 200);

    addSecondHalf(W, 200, a1);
    addSecondHalf(Y, 200, a2);

    for(int i = 0; i < 600; i++) cin >> Q[i];

    generate(Q, Z, 600);

    for(int i = 0; i < 200; i++) cin >> Y[i];

    generate(Y, X, 200);

    a1 = avgEven(W, Y, 200);

    for(int i = 0; i < 600; i++) cin >> Q[i];

    generate(Q, Z, 600);

    return 0;
}