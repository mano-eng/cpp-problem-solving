#include <iostream>
#include <cstring>
using namespace std;

struct Drawer_Unit
{
    char color[20];
    int nd;
    float price;
};

struct Desk
{
    int nu;
    Drawer_Unit du[100];
    float price;
};

int main()
{
    int n;
    cin >> n;

    Desk d[100];

    // 1- Read information for N desks
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].nu;
        cin >> d[i].price;

        for (int j = 0; j < d[i].nu; j++)
        {
            cin >> d[i].du[j].color;
            cin >> d[i].du[j].nd;
            cin >> d[i].du[j].price;
        }
    }

    // 2- Find the most expensive desk
    float maxPrice = -9999999;
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        float sum = d[i].price;

        for (int j = 0; j < d[i].nu; j++)
        {
            sum += d[i].du[j].price;
        }

        if (sum > maxPrice)
        {
            maxPrice = sum;
            pos = i;
        }
    }

    cout << pos << endl;

    // 3- Count desks with homogeneous colors
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int check = 1;

        for (int j = 1; j < d[i].nu; j++)
        {
            if (strcmp(d[i].du[j].color,
                       d[i].du[0].color) != 0)
            {
                check = 0;
            }
        }

        if (check == 1)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
