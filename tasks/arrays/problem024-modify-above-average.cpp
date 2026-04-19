/* 
Problem 024

Description:
Calculates the average of 30 numbers and increases 
elements greater than the average by 5.
*/

#include <iostream>
using namespace std;

int main()
{
    int X[30];
    int sum = 0;

    for(int i = 0; i < 30; i++)
    {
        cin >> X[i];
        sum += X[i];
    }

    int avg = sum / 30;

    for(int i = 0; i < 30; i++)
    {
        if(X[i] > avg)
        {
            X[i] += 5;
        }
    }

    for(int i = 0; i < 30; i++)
    {
        cout << X[i] << " ";
    }

    return 0;
}