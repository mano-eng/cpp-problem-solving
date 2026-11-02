#include <iostream>
using namespace std;

struct Lake
{
    char name;
    float pollution;
    float area;
};

struct Forest
{
    char country;
    int nl;
    Lake l[100];
};

int main()
{
    int n;
    cin >> n;

    Forest f[100];

    // 1- Read information for N forests
    for (int i = 0; i < n; i++)
    {
        cin >> f[i].country;
        cin >> f[i].nl;

        for (int j = 0; j < f[i].nl; j++)
        {
            cin >> f[i].l[j].name;
            cin >> f[i].l[j].pollution;
            cin >> f[i].l[j].area;
        }
    }

    // 2- Display lake names with pollution less than 50%
    int index;
    cin >> index;

    for (int j = 0; j < f[index].nl; j++)
    {
        if (f[index].l[j].pollution < 50)
        {
            cout << f[index].l[j].name << endl;
        }
    }

    // 3- Display the country with the largest total water area
    float maxArea = -9999999;
    char country;

    for (int i = 0; i < n; i++)
    {
        float sum = 0;

        for (int j = 0; j < f[i].nl; j++)
        {
            sum += f[i].l[j].area;
        }

        if (sum > maxArea)
        {
            maxArea = sum;
            country = f[i].country;
        }
    }

    cout << country << endl;

    return 0;
}
