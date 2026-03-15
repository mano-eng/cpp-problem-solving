/* Problem 50
   Read two values and display the numbers between them that are divisible by 3.
*/

#include <iostream>
using namespace std;

int main()
{
    int val1, val2;

    cin >> val1 >> val2;

    for(int i = val1 + 1; i < val2; i++)
    {
        if(i % 3 == 0)
            cout << i << " ";
    }

    return 0;
}