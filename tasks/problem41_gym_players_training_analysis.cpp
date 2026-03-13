/*
Problem 41: Gym Players Training Analysis

Description:
The program reads information for N players.

For each player:
- Read the weight before starting training.
- Read the duration (in minutes) spent on each machine.
  Note: there are 35 machines in the gym.
- Read the weight after finishing training.

The program:
1) Displays the number of machines the player used.
2) If the player lost more than 800 grams during training,
   display the total time he spent in the gym.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N; // number of players

    float weightBefore, weightAfter;
    int time;

    for(int i = 1; i <= N; i++)
    {
        cin >> weightBefore;

        int machinesUsed = 0;
        int totalTime = 0;

        // loop for the 35 machines
        for(int j = 1; j <= 35; j++)
        {
            cin >> time;

            if(time > 0)
                machinesUsed++;

            totalTime += time;
        }

        cin >> weightAfter;

        cout << "Machines used = " << machinesUsed << endl;

        float lostWeight = weightBefore - weightAfter;

        // check if weight loss > 800 grams
        if(lostWeight > 0.8)
        {
            cout << "Total time in gym = " << totalTime << endl;
        }
    }

    return 0;
}