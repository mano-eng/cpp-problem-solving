#include <iostream>
using namespace std;

int main()
{
    int X[30];
    int value;

    // إدخال
    for(int i = 0; i < 30; i++)
    {
        cin >> X[i];
    }

    // الرقم المطلوب
    cin >> value;

    // البحث
    for(int i = 0; i < 30; i++)
    {
        if(X[i] == value)
        {
            cout << i << " ";
        }
    }

    return 0;
}