#include <iostream>
using namespace std;

/*
Description:
- Read N numbers
- For each number:
  -> Take first 2 odd digits from the RIGHT
  -> Keep their correct order (like example)
- Concatenate all results into one number
*/

int main()
{
    int N, val;
    cin >> N;

    long long result = 0;

    for (int i = 1; i <= N; i++)
    {
        cin >> val;

        int count = 0;
        int temp = 0;

        while (val > 0 && count < 2)
        {
            int dig = val % 10;

            if (dig % 2 == 1)
            {
                temp = temp * 10 + dig;  // نجمع عادي
                count++;
            }

            val /= 10;
        }

        // نعكس temp علشان يطلع بالترتيب الصح
        int rev = 0;
        while (temp > 0)
        {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }

        result = result * 100 + rev;
    }

    cout << result;

    return 0;
}
