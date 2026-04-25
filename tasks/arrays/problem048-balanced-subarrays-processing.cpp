#include <iostream>
using namespace std;

int main()
{
    int X[30], Y[30], Z[30], Q[30], B[30];
    int i;

    // ================== PART 1 ==================
    int pos;
    for(i = 0; i < 30; i++) cin >> X[i];
    cin >> pos;

    for(i = 0; i < 30; i++) Y[i] = -1;

    int left, right, len, sumL, sumR;
    int j = 29;

    for(len = 1; len <= pos && pos + len < 30; len++)
    {
        sumL = sumR = 0;

        for(i = pos - len; i < pos; i++) sumL += X[i];
        for(i = pos + 1; i <= pos + len; i++) sumR += X[i];

        if(sumL == sumR)
        {
            left = pos - len;
            right = pos + len;
            break;
        }
    }

    for(i = right; i >= left; i--)
    {
        if(i != pos)
        {
            Y[j] = X[i];
            j--;
        }
    }

    // ================== PART 2 ==================
    int minPos = 0;

    for(i = 1; i < 30; i++)
    {
        if(X[i] % 2 != 0 && X[i] < X[minPos])
            minPos = i;
    }

    pos = minPos;

    for(len = 1; len <= pos && pos + len < 30; len++)
    {
        sumL = sumR = 0;

        for(i = pos - len; i < pos; i++) sumL += X[i];
        for(i = pos + 1; i <= pos + len; i++) sumR += X[i];

        if(sumL == sumR)
        {
            left = pos - len;
            right = pos + len;
            break;
        }
    }

    for(i = right; i >= left; i--)
    {
        if(i != pos)
        {
            Y[j] = X[i];
            j--;
        }
    }

    // ================== PART 3 ==================
    for(i = 0; i < 30; i++) cin >> Z[i];

    for(i = 0; i < 30; i++) Q[i] = -1;

    j = 29;

    minPos = 0;
    for(i = 1; i < 30; i++)
    {
        if(Z[i] % 2 != 0 && Z[i] < Z[minPos])
            minPos = i;
    }

    pos = minPos;

    for(len = 1; len <= pos && pos + len < 30; len++)
    {
        sumL = sumR = 0;

        for(i = pos - len; i < pos; i++) sumL += Z[i];
        for(i = pos + 1; i <= pos + len; i++) sumR += Z[i];

        if(sumL == sumR)
        {
            left = pos - len;
            right = pos + len;
            break;
        }
    }

    for(i = right; i >= left; i--)
    {
        if(i != pos)
        {
            Q[j] = Z[i];
            j--;
        }
    }

    // ================== PART 4 ==================
    int maxPos = 0;

    for(i = 1; i < 30; i++)
    {
        if(Z[i] % 2 != 0 && Z[i] > Z[maxPos])
            maxPos = i;
    }

    pos = maxPos;

    for(len = 1; len <= pos && pos + len < 30; len++)
    {
        sumL = sumR = 0;

        for(i = pos - len; i < pos; i++) sumL += Z[i];
        for(i = pos + 1; i <= pos + len; i++) sumR += Z[i];

        if(sumL == sumR)
        {
            left = pos - len;
            right = pos + len;
            break;
        }
    }

    for(i = right; i >= left; i--)
    {
        if(i != pos)
        {
            Q[j] = Z[i];
            j--;
        }
    }

    // ================== PART 5 ==================
    for(i = 0; i < 30; i++) cin >> X[i];

    for(i = 0; i < 30; i++) B[i] = -1;

    j = 29;

    maxPos = 0;
    for(i = 1; i < 30; i++)
    {
        if(X[i] % 2 != 0 && X[i] > X[maxPos])
            maxPos = i;
    }

    pos = maxPos;

    for(len = 1; len <= pos && pos + len < 30; len++)
    {
        sumL = sumR = 0;

        for(i = pos - len; i < pos; i++) sumL += X[i];
        for(i = pos + 1; i <= pos + len; i++) sumR += X[i];

        if(sumL == sumR)
        {
            left = pos - len;
            right = pos + len;
            break;
        }
    }

    for(i = right; i >= left; i--)
    {
        if(i != pos)
        {
            B[j] = X[i];
            j--;
        }
    }

    // ================== OUTPUT ==================
    for(i = 0; i < 30; i++) cout << Y[i] << " ";
    cout << endl;

    for(i = 0; i < 30; i++) cout << Q[i] << " ";
    cout << endl;

    for(i = 0; i < 30; i++) cout << B[i] << " ";

    return 0;
}