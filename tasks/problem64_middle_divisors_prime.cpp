Problem 64 - Middle Divisors Prime Check

This program reads an integer V, finds all its divisors excluding 1 and V,
then selects the two middle divisors (since count is even).
It calculates their sum and checks whether the result is a prime number.

If the sum is prime → output YES  
Otherwise → output NO

#include <iostream>
using namespace std;

int main()
{
    int V;
    cin >> V;

    int ct = 0;
    int h1 = 0, h2 = 0;

    //  count divisors (excluding 1 and V)
    for(int i = 2; i < V; i++)
    {
        if(V % i == 0)
        {
            ct++;
        }
    }

    // get middle two divisors
    int c = 0;
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

    // sum
    int sum = h1 + h2;

    // check prime (1 = prime, 0 = not prime)
    int prime = 1;

    if(sum < 2)
        prime = 0;

    for(int i = 2; i < sum; i++)
    {
        if(sum % i == 0)
        {
            prime = 0;
        }
    }

      // output
    if(prime == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}