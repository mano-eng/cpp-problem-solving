/*
Problem 90 - Pods and Beans Analysis

Description:
The program processes data for N trees.
For each tree, it reads type and number of pods (nPods).
Then for each pod, it reads podWeight, beansWeight, and number of beans (nBeans).

It determines:
1) For each tree, calculates the average beansWeight for pods where nBeans > 50.
2) Finds the position of the tree of type 'B' with the minimum number of pods.

Finally, it prints:
- The average for each tree (or 0 if no valid pods).
- The position of the selected tree (type 'B' with minimum pods).
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int minPods = 1000000000;
    int pos = 0;

    for(int i = 1; i <= N; i++)
    {
        char type;
        int nPods;

        cin >> type >> nPods;

        int sum = 0, ct = 0;

        for(int j = 1; j <= nPods; j++)
        {
            int podWeight, beansWeight, nBeans;
            cin >> podWeight >> beansWeight >> nBeans;

            // average condition
            if(nBeans > 50)
            {
                sum += beansWeight;
                ct++;
            }
        }

        // minimum pods for type B
        if(type == 'B' && nPods < minPods)
        {
            minPods = nPods;
            pos = i;
        }

        // average per tree
        if(ct > 0)
            cout << (sum / ct) << endl;
        else
            cout << 0 << endl;
    }

    // tree position
    cout << pos << endl;

    return 0;
}