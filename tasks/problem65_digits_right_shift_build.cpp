// Problem 65 - Right Rotation Build
// Read number V
// In each step:
// - Take the last digit of V
// - Remove it from V
// - Add it to a new number (moved) from left to right
// - Combine remaining V with moved to form new number M
// - Print M in each step
#include <iostream>
using namespace std;

int main()
{
    int V;
    cin >> V;

    int moved = 0;

    while(V > 0)
    {
        int last = V % 10;   // آخر رقم
        V = V / 10;          // حذف آخر رقم

        moved = last + (moved * 10); // بناء الجزء المتحرك

        // نحسب عدد خانات moved
        int temp = moved;
        int p = 1;

        while(temp > 0)
        {
            p = p * 10;
            temp = temp / 10;
        }

        int M = V * p + moved; // تركيب الرقم

        cout << M << endl;
    }

    return 0;
}