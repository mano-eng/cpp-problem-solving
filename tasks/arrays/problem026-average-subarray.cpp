/* 
Problem 026

Description:
Calculates the average of elements between two given indices.
*/

#include <iostream>
using namespace std;

int main()
{
    int X[30];
    int start, end;

    for(int i = 0; i < 30; i++)
    {
        cin >> X[i];
    }

    cin >> start >> end;

    int sum = 0;
    int count = 0;

    for(int i = start; i <= end; i++)
    {
        sum += X[i];
        count++;
    }

    int avg = sum / count;

    cout << avg;

    return 0;
}