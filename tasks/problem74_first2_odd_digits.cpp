
/*
Description:
- Read N numbers
- For each number:
  -> Take first 2 odd digits from the RIGHT
  -> Keep their correct order (like example)
- Concatenate all results into one number
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int val = 0;

    for(int i = 1; i <= N; i++)
    {
        int X;
        cin >> X;

        int ct = 0;
        int d1 = 0, d2 = 0;

        while(X > 0)
        {
            int d = X % 10;

            if(d % 2 != 0) // odd
            {
                ct++;

                if(ct == 1)
                    d1 = d;

                if(ct == 2)
                {
                    d2 = d;
                    break;
                }
            }

            X = X / 10;
        }

        int y = d2 * 10 + d1;

        val = val * 100 + y;
    }

    cout << val;

    return 0;
}
