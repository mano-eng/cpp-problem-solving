#include <iostream>
using namespace std;

int main()
{
    int N;                 // عدد الأشجار
    cout << "Enter number of trees: ";
    cin >> N;

    char T;                // نوع الشجرة (A / B / C)
    int P;                 // عدد الـ pods في الشجرة

    int w;                 // وزن الـ pod
    int wb;                // وزن الحبوب داخل الـ pod
    int nb;                // عدد الحبوب داخل الـ pod

    int minPods = 99999;   // لتحديد أقل عدد pods للشجرة من النوع B
    int treeIndex = -1;    // لتخزين رقم الشجرة الأقل

    // loop تمر على كل الأشجار
    for (int i = 0; i < N; i++)
    {
        cout << "Enter type of tree (A/B/C): ";
        cin >> T;

        cout << "Enter number of pods: ";
        cin >> P;

        int sum = 0;       // مجموع وزن الحبوب
        int count = 0;     // عدد الـ pods التي عدد الحبوب فيها > 50

        // loop تمر على كل pods في الشجرة
        for (int j = 0; j < P; j++)
        {
            cout << "Enter pod weight: ";
            cin >> w;

            cout << "Enter beans weight: ";
            cin >> wb;

            cout << "Enter number of beans: ";
            cin >> nb;

            // نحسب فقط pods التي عدد الحبوب فيها أكبر من 50
            if (nb > 50)
            {
                sum += wb;   // نجمع وزن الحبوب
                count++;     // نزيد العداد
            }
        }

        // حساب المتوسط لكل شجرة
        double avg = 0;

        if (count > 0)
            avg = (double)sum / count;

        cout << "Average beans weight for tree " << i + 1 << " = " << avg << endl;

        // تحديد أقل عدد pods للشجرة من النوع B
        if (T == 'B')
        {
            if (P < minPods)
            {
                minPods = P;
                treeIndex = i + 1;   // حفظ رقم الشجرة
            }
        }
    }

    // عرض الشجرة من النوع B التي لديها أقل عدد pods
    cout << "Tree with lowest number of pods from type B = " << treeIndex << endl;

    return 0;
}
