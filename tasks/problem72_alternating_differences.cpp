/*
Problem Description:
Write a program that reads N numbers and checks:
- Differences of odd positions are equal
- Differences of even positions are equal

Print TRUE or FALSE
*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int prev;
    cin >> prev;

    int checkOdd = 0, checkEven = 0;
    int diffOdd = 0, diffEven = 0;

    for(int i = 2; i <= N; i++)
    {
        int curr;
        cin >> curr;

        int diff = curr - prev;

        if(i % 2 == 1) // فردى
        {
            if(checkOdd == 0)
            {
                diffOdd = diff;
                checkOdd = 1;
            }
            else
            {
                if(diff != diffOdd)
                {
                    cout << "FALSE";
                    return 0;
                }
            }
        }
        else // زوجى
        {
            if(checkEven == 0)
            {
                diffEven = diff;
                checkEven = 1;
            }
            else
            {
                if(diff != diffEven)
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