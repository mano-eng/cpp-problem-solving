// Read number V
// Find its divisors (excluding V)
// Get the second divisor and last two divisors before V
// Print numbers between them that are divisible by the second divisor


#include <iostream>
using namespace std;

int main()
{
    int V;
    cin >> V;

    int count = 0;
    int second = 0;
    int last1 = 0, last2 = 0;

    // find divisors (excluding V itself)
    for(int i = 1; i < V; i++)
    {
        if(V % i == 0)
        {
            count++;

            if(count == 2)
                second = i;

            last1 = last2;
            last2 = i;
        }
    }

    // print values between last two divisors
    for(int i = last1 + 1; i < last2; i++)
    {
        if(i % second == 0)
            cout << i << " ";
    }

    return 0;
}