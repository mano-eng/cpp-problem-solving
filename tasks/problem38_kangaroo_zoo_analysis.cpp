/*
Problem 38: Kangaroo Zoo Analysis

Description:
A zoo contains N kangaroos.

For each kangaroo we read:
1) Age of the kangaroo.
2) Type of kangaroo:
   1 = Has a new kid
   0 = No kid
3) Distance of the jump.

The program determines:
- The oldest kangaroo that does NOT have a kid.
- The average jump distance for kangaroos that have a new kid.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int age;
    int type;
    double distance;

    int maxAge = -999;
    int position = 0;

    int count = 0;
    double totalDistance = 0;

    for(int i = 1; i <= N; i++)
    {
        cin >> age;
        cin >> type;
        cin >> distance;

        // oldest kangaroo without kid
        if(type == 0)
        {
            if(age > maxAge)
            {
                maxAge = age;
                position = i;
            }
        }

        // kangaroos with kid
        if(type == 1)
        {
            count++;
            totalDistance += distance;
        }
    }

    double averageDistance = totalDistance / count;

    cout << "Oldest kangaroo without kid position = " << position << endl;
    cout << "Average jump distance (kangaroos with kid) = " << averageDistance << endl;

    return 0;
}