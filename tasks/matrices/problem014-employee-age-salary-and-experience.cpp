#include <iostream>
using namespace std;
struct emp
{
    char name[300];
    int sal;
    int age;
    int noy;

};

int main()
{
    emp e[5];

    for (int i = 0;i < 5;i++)
    {
        cin >> e[i].name;
        cin >> e[i].age;
        cin >> e[i].sal;
        cin >> e[i].noy;
    }
    int tot = 0;
    for (int i = 0;i < 5;i++)
    {
        tot += e[i].age;
    }
    float avg = tot / 5;
    cout << avg;
    int tot2 = 0;
    int ct = 0;
    for (int i = 0;i < 5;i++)
    {
        if (e[i].name[0] == 'a' || e[i].name[0] == 'y')
        {
            tot2 += e[i].sal;
            ct++;
        }
    }
    float avg2 = tot2 / ct;
    for (int i = 0;i < 5;i++)
    {
        if (e[i].noy > 5)
        {
            cout << e[i].name;
        }
    }
       
    

    return 0;
}
