#include <iostream>
using namespace std;

/*
Description:
Read N numbers. For each number, extract the first 2 odd digits
(from left to right), then concatenate all results into one number.
*/

int main()
{
    int N, val;
    cin >> N;

    long long result = 0;

    for (int i = 1; i <= N; i++)
    {
        cin >> val;

        int temp = val;
        int rev = 0;

        // نعكس الرقم علشان نبدأ من الشمال
        while (temp > 0)
        {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }

        int count = 0;

        // نرجع نمشي من الشمال (بعد العكس)
        while (rev > 0 && count < 2)
        {
            int d = rev % 10;

            if (d % 2 != 0)   // لو فردي
            {
                result = result * 10 + d;
                count++;
            }

            rev /= 10;
        }
    }

    cout << result;

    return 0;
}