/*
Program: Tree Lumber Analysis

Description:
This program reads data about several trees and their produced lumbers.
For each tree, it calculates the average meters produced by lumbers
of color 'A'. It also determines the shortest tree and displays the
number of lumbers produced from that tree.
*/

#include <iostream>
using namespace std;

int main()
{
    int nTrees;              // number of trees
    cout << "Enter number of trees: ";
    cin >> nTrees;

    int height, lumbers;
    int minHeight = 999999;  // track shortest tree
    int lumbersOfShortest;

    // process all trees
    for (int i = 0; i < nTrees; i++)
    {
        cout << "Enter height of tree: ";
        cin >> height;

        cout << "Enter number of lumbers: ";
        cin >> lumbers;

        int sum = 0;
        int count = 0;

        // process lumbers of the current tree
        for (int j = 0; j < lumbers; j++)
        {
            char color;
            int meters;

            cout << "Enter color of lumber (A/B/C): ";
            cin >> color;

            cout << "Enter meters produced: ";
            cin >> meters;

            // include only color A in the average
            if (color == 'A')
            {
                sum += meters;
                count++;
            }
        }

        double avg = 0;
        if (count > 0)
            avg = (double)sum / count;

        cout << "Average meters for tree " << i+1 << " = " << avg << endl;

        // update shortest tree
        if (height < minHeight)
        {
            minHeight = height;
            lumbersOfShortest = lumbers;
        }
    }

    // result for shortest tree
    cout << "Number of lumbers from the shortest tree = "
         << lumbersOfShortest << endl;

    return 0;
}
