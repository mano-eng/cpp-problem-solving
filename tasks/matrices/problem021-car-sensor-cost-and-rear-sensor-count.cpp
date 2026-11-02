#include <iostream>
#include <cstring>
using namespace std;

struct Sensor
{
    char location[20];
    float price;
    float area;
};

struct Car
{
    int id;
    int ns;
    Sensor s[100];
};

int main()
{
    int n;
    cin >> n;

    Car c[100];

    // 1- Read information for N cars
    for (int i = 0; i < n; i++)
    {
        cin >> c[i].id;
        cin >> c[i].ns;

        for (int j = 0; j < c[i].ns; j++)
        {
            cin >> c[i].s[j].location;
            cin >> c[i].s[j].price;
            cin >> c[i].s[j].area;
        }
    }
	// 2- Calculate the total cost of the selected car's sensors
int index;
cin >> index;

float sum = 0;

for (int j = 0; j < c[index].ns; j++)
{
    sum += c[index].s[j].price;
}

cout << sum << endl;

 // 3- Count cars that include only rear sensors
    int count = 0;

for (int i = 0; i < n; i++)
{
    int check = 1;

    for (int j = 0; j < c[i].ns; j++)
    {
        if (c[i].s[j].location[0] != 'R' ||
            c[i].s[j].location[1] != 'e' ||
            c[i].s[j].location[2] != 'a' ||
            c[i].s[j].location[3] != 'r')
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
