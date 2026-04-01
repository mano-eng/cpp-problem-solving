/*
Problem 85 - Middle Divisors Prime Check

Description:
The program reads an integer V and finds all its divisors excluding 1 and V.

It determines:
1) Counts the number of divisors of V (excluding 1 and V).
2) Identifies the two middle divisors from the sorted list of divisors.
3) Computes their sum.
4) Checks whether this sum is a prime number.

Finally, it prints:
- "YES" if the sum is prime.
- "NO" otherwise.
*/

#include <iostream>
using namespace std;

int main()
{
    int V;
    cin >> V;

    int ct = 0;

    // count divisors
    for(int i = 2; i < V; i++)
    {
        if(V % i == 0)
            ct++;
    }

    int h1 = 0, h2 = 0;
    int c = 0;

    // get middle divisors
    for(int i = 2; i < V; i++)
    {
        if(V % i == 0)
        {
            c++;

            if(c == ct / 2)
                h1 = i;

            if(c == ct / 2 + 1)
                h2 = i;
        }
    }

    int sum = h1 + h2;

    int prime = 1;

    if(sum < 2)
        prime = 0;

    for(int i = 2; i < sum; i++)
    {
        if(sum % i == 0)
            prime = 0;
    }

    if(prime == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}