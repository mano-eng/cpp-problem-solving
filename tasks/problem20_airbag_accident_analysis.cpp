/*
Problem 20: Airbag Accident Analysis

Description:
The program reads information about N car accidents.
For each accident it reads the distance between the driver
and the steering wheel, the speed of the car, and the driver's
status after the accident (1 = safe, 2 = injured, 3 = dead).

The program counts the number of injured cases, calculates
the average speed of accidents that ended with a dead status,
and finds the lowest distance for safe cases.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int distance, speed, status;

    int injuredCount = 0;

    int sumSpeed = 0;
    int deadCount = 0;

    int minDistance = 1000000;

    for(int i = 0; i < N; i++)
    {
        cin >> distance;
        cin >> speed;
        cin >> status;

        if(status == 2)
            injuredCount++;

        if(status == 3)
        {
            sumSpeed += speed;
            deadCount++;
        }

        if(status == 1)
        {
            if(distance < minDistance)
                minDistance = distance;
        }
    }

    double avgSpeed = 0;

    if(deadCount > 0)
        avgSpeed = (double)sumSpeed / deadCount;

    cout << "Injured cases = " << injuredCount << endl;
    cout << "Average speed for dead cases = " << avgSpeed << endl;
    cout << "Lowest distance for safe cases = " << minDistance << endl;

    return 0;
}