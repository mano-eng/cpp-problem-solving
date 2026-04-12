/* 
Problem 005

Description:
Simulates a two-player game where a number is split into two factors.
A player loses if the move is invalid.
*/
#include <iostream>
using namespace std;

int main() {

    int arr[100];

    // تصفير
    for (int i = 0; i < 100; i++)
        arr[i] = 0;

    int val;
    cin >> val;

    arr[0] = val;

    int player = 1;

    while (1) {

        int pos;
        cin >> pos;

        int num1, num2;
        cin >> num1 >> num2;

        // تحقق من صحة الحركة
        if (arr[pos] <= 1 || num1 * num2 != arr[pos]) {
            if (player == 1)
                cout << "Second player wins\n";
            else
                cout << "First player wins\n";
            break;
        }

        // استبدال الرقم
        arr[pos] = num1;

        // إضافة الرقم التاني
        for (int i = 0; i < 100; i++) {
            if (arr[i] == 0) {
                arr[i] = num2;
                break;
            }
        }

        // تبديل اللاعب
        if (player == 1)
            player = 2;
        else
            player = 1;
    }

    return 0;
}
