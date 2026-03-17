/*
Problem - Juice Shop Analysis

Description:
This program processes data for 30 days.
For each day, it reads temperature and number of customers.
For each customer, it reads juice type, cup size, and price.

It determines:
1) The day with the lowest number of customers.
2) The number of large cups sold on the hottest day.
*/

#include <iostream>
using namespace std;

int main()
{
    int nc, min = 99999, pos1 = 0;
    double w, max = -9999;
    int pos2 = 0;

    for(int i = 1; i <= 30; i++)
    {
        cin >> w >> nc;

        int ct = 0;  // ✔️ يتصفر لكل يوم

        for(int j = 1; j <= nc; j++)
        {
            string t;
            char s;
            double p;

            cin >> t >> s >> p;

            if(s == 'L')
                ct++;
        }

        // أقل عدد عملاء
        if(nc < min)
        {
            min = nc;
            pos1 = i;
        }

        // أعلى درجة حرارة
        if(w > max)
        {
            max = w;
            pos2 = ct;   //  بنخزن عدد الـ Large
        }
    }

    cout << pos1 << endl;
    cout << pos2 << endl;

    return 0;
}
