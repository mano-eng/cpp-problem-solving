// Problem 78:
// Read N numbers and check if the differences between consecutive numbers
// follow an alternating pattern (diff1, diff2, diff1, diff2, ...)
// Output TRUE if pattern is valid, otherwise FALSE

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int prev, curr;
    cin >> prev;

    int diff1 = 0, diff2 = 0, diff;

    for(int i = 2; i <= N; i++)
    {
        cin >> curr;

        diff = curr - prev;

        if(i == 2)
            diff1 = diff;
        else if(i == 3)
            diff2 = diff;
        else
        {
            if(i % 2 == 0) // even → compare with diff1
            {
                if(diff != diff1)
                {
                    cout << "FALSE";
                    return 0;
                }
            }
            else // odd → compare with diff2
            {
                if(diff != diff2)
                {
                    cout << "FALSE";
                    return 0;
                }
            }
        }

        prev = curr;
    }

    cout << "TRUE";

    return 0;
}