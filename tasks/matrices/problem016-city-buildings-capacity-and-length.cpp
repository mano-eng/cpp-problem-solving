
#include <iostream>
using namespace std;

struct Building
{
    float cap;
    float pr;
    int len;
    int nh;
};

struct City
{
    char nc;
    int nb;
    Building B[100];
};

int main()
{
    int N;
    cin >> N;

    City c[100];

    for (int i = 0; i < N; i++)
    {
        cin >> c[i].nc;
        cin >> c[i].nb;

        for (int j = 0; j < c[i].nb; j++)
        {
            cin >> c[i].B[j].cap;
            cin >> c[i].B[j].pr;
            cin >> c[i].B[j].len;
            cin >> c[i].B[j].nh;
        }
    }

    float max = -1;
    char cname;

    for (int i = 0; i < N; i++)
    {
        float tot = 0;

        for (int j = 0; j < c[i].nb; j++)
        {
            tot += c[i].B[j].cap;
        }

        if (tot > max)
        {
            max = tot;
            cname = c[i].nc;
        }
    }

    cout << cname << endl;

    char ncity;
    cin >> ncity;

    int ct = 0;

    for (int i = 0; i < N; i++)
    {
        if (c[i].nc == ncity)
        {
            for (int j = 0; j < c[i].nb; j++)
            {
                if (c[i].B[j].len > 45)
                {
                    ct++;
                }
            }
        }
    }

    cout << ct;

    return 0;
}
