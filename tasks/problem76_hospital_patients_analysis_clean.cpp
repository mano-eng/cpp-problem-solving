#include <iostream>
using namespace std;

/*
Problem 76 - Hospital Patients Analysis (Clean Version)

Description:
Processes N hospitals.

For each hospital:
- Reads number of patients
- For each patient:
    type, age, cost, status

Program:
1) For hospitals with more than 20 patients:
   print average cost of surgery patients.

2) Find hospital with minimum patients,
   and print highest cost among recovered patients.
*/

int main()
{
    int N;
    cin >> N;

    int minPatients = 9999;
    double bestCost = 0;

    for (int i = 1; i <= N; i++)
    {
        int NP;
        cin >> NP;

        double sum = 0;
        int count = 0;
        double maxRecoveredCost = -9999;

        for (int j = 1; j <= NP; j++)
        {
            int type, age, status;
            double cost;

            cin >> type >> age >> cost >> status;

            // average for surgery patients
            if (NP > 20 && type == 2)
            {
                sum += cost;
                count++;
            }

            // max recovered cost
            if (status == 1 && cost > maxRecoveredCost)
            {
                maxRecoveredCost = cost;
            }
        }

        // print average
        if (NP > 20)
        {
            double avg = 0;
            if (count != 0)
                avg = sum / count;

            cout << avg << endl;
        }

        // minimum patients hospital
        if (NP < minPatients)
        {
            minPatients = NP;
            bestCost = maxRecoveredCost;
        }
    }

    cout << bestCost << endl;

    return 0;
}