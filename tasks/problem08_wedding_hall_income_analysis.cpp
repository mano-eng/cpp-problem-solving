/*
Program: Wedding Hall Income Analysis

Description:
This program reads the reservation information of wedding halls for a full year (365 days).

For each day and each hall:
- The program asks if the hall is reserved.
- If the hall is reserved, the program reads:
  number of chairs, cake pieces (type1), cake pieces (type2), and steak dishes.
- Then it calculates the income for that hall.

The program determines:
1) The number of persons in the hall that produced the largest income on day 210.
2) The number of days in which all halls were not reserved.
*/

#include <iostream>
using namespace std;

int main()
{
    int nc, nk1, nk2, ns;     // nc = chairs, nk1 = cake type1, nk2 = cake type2, ns = steak
    int in;                   // income
    int maxIncome = -1;       // أكبر دخل في اليوم 210
    int persons = 0;          // عدد الأشخاص في القاعة ذات أكبر دخل

    int ct = 0;               // عدد الأيام التي كل القاعات فيها غير محجوزة
    char h;                   // هل القاعة محجوزة

    int halls = 3;            // عدد القاعات (افتراض)

    // loop على أيام السنة
    for (int d = 1; d <= 365; d++)
    {
        int c = 0;   // عداد القاعات غير المحجوزة في هذا اليوم

        // loop على القاعات
        for (int i = 0; i < halls; i++)
        {
            cout << "Is hall reserved (Y/N): ";
            cin >> h;

            // إذا كانت القاعة محجوزة
            if (h == 'Y' || h == 'y')
            {
                cout << "Enter number of chairs: ";
                cin >> nc;

                cout << "Enter cake pieces type1: ";
                cin >> nk1;

                cout << "Enter cake pieces type2: ";
                cin >> nk2;

                cout << "Enter steak dishes: ";
                cin >> ns;

                // حساب الدخل
                in = (nc * 100) + (nk1 * 30) + (nk2 * 35) + (ns * 85);

                // في اليوم 210 نحدد أكبر دخل
                if (d == 210)
                {
                    if (in > maxIncome)
                    {
                        maxIncome = in;
                        persons = nc;   // حفظ عدد الأشخاص
                    }
                }
            }
            else
            {
                c++;   // قاعة غير محجوزة
            }
        }

        // إذا كانت كل القاعات غير محجوزة في هذا اليوم
        if (c == halls)
        {
            ct++;
        }
    }

    // طباعة النتائج
    cout << "Number of persons in hall with largest income in day 210 = "
         << persons << endl;

    cout << "Number of days where all halls were not reserved = "
         << ct << endl;

    return 0;
}