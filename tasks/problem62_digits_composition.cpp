// Read N numbers
// Take:
// - first digit from last number
// - last digit from before last
// - last digit from second number
// - first digit from first number
// Combine them into one number and print it#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int num;
    int first_num = 0, second_num = 0;
    int before_last = 0, last = 0;

    for(int i = 1; i <= N; i++)
    {
        cin >> num;

        if(i == 1)
            first_num = num;

        if(i == 2)
            second_num = num;

        if(i == N-1)
            before_last = num;

        if(i == N)
            last = num;
    }

    // first digit من الأول
    int d1 = first_num;
    while(d1 >= 10)
        d1 /= 10;

    // last digit من التاني
    int d2 = second_num % 10;

    // last digit من قبل الأخير
    int d3 = before_last % 10;

    // first digit من الأخير
    int d4 = last;
    while(d4 >= 10)
        d4 /= 10;

    cout << d4 << d3 << d2 << d1;

    return 0;
}