// Problem 77:
// Read N numbers, compute number of divisors (excluding 1 and the number itself)
// Check if differences between consecutive counts are constant
// Output TRUE if fixed base exists, otherwise FALSE

#include <iostream>
using namespace std;

int main()
{
    int N, prev, curr;
    cin >> N;

    int ct1 = 0, ct2 = 0;
    int diff = 0;
    int check = 0;

    cin >> prev;

    // count divisors for first number
    for(int i = 2; i < prev; i++)
    {
        if(prev % i == 0)
            ct1++;
    }

    for(int i = 2; i <= N; i++)
    {
        cin >> curr;

        ct2 = 0;

        // count divisors for current number
        for(int j = 2; j < curr; j++)
        {
            if(curr % j == 0)
                ct2++;
        }

        if(check == 0)
        {
            diff = ct2 - ct1;
            check = 1;
        }
        else
        {
            if(ct2 - ct1 != diff)
            {
                cout << "FALSE";
                return 0;
            }
        }

        ct1 = ct2;
    }

    cout << "TRUE";

    return 0;
}