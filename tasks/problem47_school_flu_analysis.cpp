#include <iostream>
using namespace std;

int main()
{
    int nS, nC;
    int nSt, nH, nF;

    int max = -9999;
    int pos = 0;

    int ct = 0;

    cin >> nS;

    for(int i = 0; i < nS; i++)
    {
        cin >> nC;

        int totalStudents = 0;
        int totalH1N1 = 0;

        max = -9999;

        for(int j = 0; j < nC; j++)
        {
            cin >> nSt >> nH >> nF;

            totalStudents += nSt;
            totalH1N1 += nH;

            if(nF > max)
            {
                max = nF;
                pos = j;
            }
        }

        if((double)totalH1N1 / totalStudents > 0.05)
        {
            cout << "closed" << endl;
            ct++;
        }

        cout << pos << endl;
    }

    cout << ct << endl;

    return 0;
}
