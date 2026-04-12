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

        // تحقق
        if (arr[pos] <= 1 || num1 * num2 != arr[pos]) {
            cout << "Player " << player << " lose!\n";
            break;
        }

        // التبديل
        arr[pos] = num1;

        // الإضافة
        for (int i = 0; i < 100; i++) {
            if (arr[i] == 0) {
                arr[i] = num2;
                break;
            }
        }

        // طباعة
        for (int i = 0; i < 100; i++)
            cout << arr[i] << " ";
        cout << endl;

        // تبديل اللاعب
        if (player == 1)
            player = 2;
        else
            player = 1;
    }

    return 0;
}
}
