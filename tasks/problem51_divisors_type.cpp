/* Problem 52
   Read a value V and check its divisors.
   Display EVENS, ODDS, or MIXED.
*/

#include <iostream>
using namespace std;

int main()
{
    int v, num = 1;
    int even = 0, odd = 0;

    cin >> v;

    while(num < v)
    {
        if(v % num == 0)
        {
            cout << num << " ";

            if(num % 2 == 0)
                even++;
            else
                odd++;
        }

        num++;
    }

    cout << endl;

    if(even > 0 && odd > 0)
        cout << "MIXED";
    else if(even > 0)
        cout << "EVENS";
    else
        cout << "ODDS";

    return 0;
}