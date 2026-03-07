/*
Program: Tree Pods Analysis

Description:
This program reads information about several trees and their pods.
For each tree, it calculates the average beans weight for pods that
contain more than 50 beans. It also determines the tree of type B
that has the lowest number of pods.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;                 // number of trees
    cout << "Enter number of trees: ";
    cin >> N;

    char T;                // tree type (A / B / C)
    int P;                 // number of pods

    int w;                 // pod weight
    int wb;                // beans weight
    int nb;                // number of beans

    int minPods = 99999;   // track lowest pods for type B
    int treeIndex = -1;

    // process all trees
    for (int i = 0; i < N; i++)
    {
        cout << "Enter type of tree (A/B/C): ";
        cin >> T;

        cout << "Enter number of pods: ";
        cin >> P;

        int sum = 0;
        int count = 0;

        // process pods of the tree
        for (int j = 0; j < P; j++)
        {
            cout << "Enter pod weight: ";
            cin >> w;

            cout << "Enter beans weight: ";
            cin >> wb;

            cout << "Enter number of beans: ";
            cin >> nb;

            // consider pods with more than 50 beans
            if (nb > 50)
            {
                sum += wb;
                count++;
            }
        }

        double avg = 0;
        if (count > 0)
            avg = (double)sum / count;

        cout << "Average beans weight for tree " << i + 1 << " = " << avg << endl;

        // update tree of type B with lowest pods
        if (T == 'B' && P < minPods)
        {
            minPods = P;
            treeIndex = i + 1;
        }
    }

    // final result
    cout << "Tree with lowest number of pods from type B = " << treeIndex << endl;

    return 0;
}
