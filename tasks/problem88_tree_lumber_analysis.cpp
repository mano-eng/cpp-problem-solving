/*
Problem 88 - Tree Lumber Analysis

Description:
The program processes data for nTrees trees.
For each tree, it reads height (h) and number of lumbers (NL).
Then for each lumber, it reads its type (col) and value (np).

It determines:
1) For each tree, calculates the average np of lumbers with type 'A'.
2) Finds the tree with the minimum height.
3) Outputs the number of lumbers (NL) of the shortest tree.

Finally, it prints:
- The average for each tree (or 0 if no 'A' type exists).
- The number of lumbers of the tree with minimum height.
*/

#include <iostream>
using namespace std;

int main()
{
    int nTrees;
    cin >> nTrees;

    int minH = 1000000000;
    int lumbersOfMinTree = 0;

    for(int i = 1; i <= nTrees; i++)
    {
        int h, NL;
        cin >> h >> NL;

        int sum = 0, ct = 0;

        for(int j = 1; j <= NL; j++)
        {
            char col;
            int np;
            cin >> col >> np;

            if(col == 'A')
            {
                sum += np;
                ct++;
            }
        }

        // minimum height tree
        if(h < minH)
        {
            minH = h;
            lumbersOfMinTree = NL;
        }

        // average per tree
        if(ct > 0)
            cout << (sum / ct) << endl;
        else
            cout << 0 << endl;
    }

    // number of lumbers of shortest tree
    cout << lumbersOfMinTree << endl;

    return 0;
}