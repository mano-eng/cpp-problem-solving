
// Read N numbers
// Take only numbers that start with digit 3
// Add their last two digits to total

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int num;
    int total = 0;

    for(int i = 1; i <= N; i++)
    {
        cin >> num;

        int temp = num;

        // نجيب أول رقم من الشمال
        while(temp >= 10)
        {
            temp /= 10;
        }

        // لو أول رقم = 3
        if(temp == 3)
        {
            int lastTwo = num % 100; // آخر رقمين
            total += lastTwo;
        }
    }

    cout << total;

    return 0;
}