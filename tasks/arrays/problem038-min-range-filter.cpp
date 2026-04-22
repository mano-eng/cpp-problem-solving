/* 
Problem 038

Description:
Reads 30 numbers and performs operations based on user choice:
1) Swaps each pair of adjacent elements.
2) Finds the maximum of each group of 10 elements.
3) Calculates the average of each group of 10 elements.
*/
#include <iostream>
using namespace std;

int main()
{
    int X[30], choice;

    // قراءة البيانات
    for(int i = 0; i < 30; i++)
        cin >> X[i];

    cin >> choice;

    // ================== choice 1 ==================
    if(choice == 1)
    {
        // swap كل عنصر مع اللي بعده
        for(int i = 0; i < 29; i += 2)
        {
            int temp = X[i];
            X[i] = X[i+1];
            X[i+1] = temp;
        }

        // طباعة
        for(int i = 0; i < 30; i++)
            cout << X[i] << " ";
    }

    // ================== choice 2 ==================
    else if(choice == 2)
    {
        // كل 10 عناصر
        for(int i = 0; i < 30; i += 10)
        {
            int max = X[i];

            for(int j = i; j < i + 10; j++)
            {
                if(X[j] > max)
                    max = X[j];
            }

            cout << max << " ";
        }
    }

    // ================== choice 3 ==================
    else if(choice == 3)
    {
        // كل 10 عناصر
        for(int i = 0; i < 30; i += 10)
        {
            int sum = 0;

            for(int j = i; j < i + 10; j++)
            {
                sum += X[j];
            }

            double avg = (double)sum / 10;
            cout << avg << " ";
        }
    }

    return 0;
}
