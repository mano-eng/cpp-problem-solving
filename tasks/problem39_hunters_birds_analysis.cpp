/*
Problem 39: Hunters Birds Analysis

Description:
The program reads information for N hunters.

For each hunter the program reads:
- Number of bullets taken
- Number of hunted birds

For each bird:
- Type of bird (A, B, or C)
- Weight of the bird

The program:
1) Displays the average weight of birds of type 'B' for each hunter.
2) Counts how many hunters used more than 50% of their taken bullets.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int huntersMore50 = 0;

    for(int i = 0; i < N; i++)
    {
        int bulletsTaken, birds;
        cin >> bulletsTaken >> birds;

        float weight;
        char type;

        float sum = 0;
        int countB = 0;

        for(int j = 0; j < birds; j++)
        {
            cin >> type >> weight;

            if(type == 'B')
            {
                sum += weight;
                countB++;
            }
        }

        int bulletsRemain;
        cin >> bulletsRemain;

        float average = 0;

        if(countB > 0)
            average = sum / countB;

        cout << "Average weight of B birds = " << average << endl;

        int usedBullets = bulletsTaken - bulletsRemain;

        if(usedBullets > bulletsTaken * 0.5)
            huntersMore50++;
    }

    cout << "Hunters using more than 50% of bullets = " << huntersMore50 << endl;

    return 0;
}