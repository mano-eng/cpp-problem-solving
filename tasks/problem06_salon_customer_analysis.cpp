#include <iostream>
using namespace std;

int main()
{
    int D;                 // عدد أيام الشهر
    cout << "Enter number of days: ";
    cin >> D;

    int N;                 // عدد الزبائن في اليوم
    int d, w, p;           // d = مدة الحلاقة ، w = وقت الانتظار ، p = السعر
    char T;                // نوع الزبون (M / K)

    int maxTime = -1;      // لتخزين أطول وقت (duration + waiting) خلال الشهر

    // loop على أيام الشهر
    for (int day = 0; day < D; day++)
    {
        cout << "Enter number of customers: ";
        cin >> N;

        int kids = 0;      // عداد الأطفال في هذا اليوم
        int men = 0;       // عداد الرجال في هذا اليوم
        int income = 0;    // الدخل الكلي لهذا اليوم

        // loop على الزبائن في هذا اليوم
        for (int i = 0; i < N; i++)
        {
            cout << "Enter customer type (M/K): ";
            cin >> T;

            cout << "Enter duration of haircut: ";
            cin >> d;

            cout << "Enter waiting time: ";
            cin >> w;

            cout << "Enter price: ";
            cin >> p;

            // جمع الدخل
            income += p;

            // تحديد نوع الزبون
            if (T == 'K')
                kids++;

            if (T == 'M')
                men++;

            // حساب أطول وقت قضاه زبون في الصالون
            if ((d + w) > maxTime)
                maxTime = d + w;
        }

        // بعد انتهاء اليوم
        // لو عدد الأطفال أكبر من الرجال نعرض الدخل
        if (kids > men)
        {
            cout << "Income of this day = " << income << endl;
        }
    }

    // في نهاية الشهر نعرض أطول وقت قضاه زبون
    cout << "Longest time spent by a customer = " << maxTime << endl;

    return 0;
}