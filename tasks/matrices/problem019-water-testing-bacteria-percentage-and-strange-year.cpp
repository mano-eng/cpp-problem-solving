#include <iostream>
using namespace std;

struct WaterTestingCase
{
    int year;
    int month;
    float percentage;
    char brand[100];
};

struct House
{
    int nt;
    WaterTestingCase t[100];
};

int main()
{
    House h[30];

    // 1- Read information for 30 houses
    for (int i = 0; i < 30; i++)
    {
        cin >> h[i].nt;

        for (int j = 0; j < h[i].nt; j++)
        {
            cin >> h[i].t[j].year;
            cin >> h[i].t[j].month;
            cin >> h[i].t[j].percentage;
            cin >> h[i].t[j].brand;
        }
    }

    // 2- Average bacteria percentage in 2014
    int index;
    cin >> index;

    float sum = 0;
    int count = 0;

    for (int j = 0; j < h[index].nt; j++)
    {
        if (h[index].t[j].year == 2014)
        {
            sum += h[index].t[j].percentage;
            count++;
        }
    }

    if (count > 0)
    {
        cout << sum / count << endl;
    }

    // 3- Find the strange year
    int year = 0;

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < h[i].nt; j++)
        {
            int y = h[i].t[j].year;
            int check = 1;

            for (int k = 0; k < 30; k++)
            {
                int found = 0;

                for (int x = 0; x < h[k].nt; x++)
                {
                    if (h[k].t[x].year == y &&
                        h[k].t[x].percentage <= 0.8)
                    {
                        found = 1;
                        break;
                    }
                }

                if (found == 1)
                {
                    check = 0;
                    break;
                }
            }

            if (check == 1)
            {
                year = y;
                break;
            }
        }

        if (year != 0)
        {
            break;
        }
    }

    if (year != 0)
    {
        cout << year << endl;
    }

    return 0;
}
