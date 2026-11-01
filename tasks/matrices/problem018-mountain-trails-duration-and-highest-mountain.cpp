#include <iostream>
using namespace std;

struct Trail
{
    char player;
    int year;
    float duration;
};

struct Mountain
{
    char name;
    int height;
    int nt;
    Trail t[100];
};

int main()
{
    int n;
    cin >> n;

    Mountain m[100];

    // 1- Read mountains
    for (int i = 0; i < n; i++)
    {
        cin >> m[i].name;
        cin >> m[i].height;
        cin >> m[i].nt;

        for (int j = 0; j < m[i].nt; j++)
        {
            cin >> m[i].t[j].player;
            cin >> m[i].t[j].year;
            cin >> m[i].t[j].duration;
        }
    }

    // 2- Average duration
    char mn;
    cin >> mn;

    for (int i = 0; i < n; i++)
    {
        if (m[i].name == mn)
        {
            float sum = 0;

            for (int j = 0; j < m[i].nt; j++)
            {
                sum += m[i].t[j].duration;
            }

            if (m[i].nt > 0)
            {
                cout << sum / m[i].nt << endl;
            }

            break;
        }
    }

    // 3- Highest mountain for a player
    char p;
    cin >> p;

    int maxHeight = -9999999;
    char highName;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m[i].nt; j++)
        {
            if (m[i].t[j].player == p)
            {
                if (m[i].height > maxHeight)
                {
                    maxHeight = m[i].height;
                    highName = m[i].name;
                }

                break;
            }
        }
    }

    if (maxHeight != -9999999)
    {
        cout << highName << endl;
    }

    return 0;
}
