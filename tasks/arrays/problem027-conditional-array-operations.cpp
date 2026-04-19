/* 
Problem 027

Description:
Performs different operations on array elements based on user choice.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[30];

    for (int i = 0; i < 30; i++)
        cin >> arr[i];

    int choice;
    cout << "1- Odd numbers > 50\n";
    cout << "2- Total of odd numbers\n";
    cout << "3- Average of odd numbers > 80\n";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < 30; i++)
            if (arr[i] % 2 != 0 && arr[i] > 50)
                cout << arr[i] << " ";
    }
    else if (choice == 2) {
        int total = 0;
        for (int i = 0; i < 30; i++)
            if (arr[i] % 2 != 0)
                total += arr[i];
        cout << total;
    }
    else if (choice == 3) {
        int sum = 0, count = 0;
        for (int i = 0; i < 30; i++)
            if (arr[i] % 2 != 0 && arr[i] > 80) {
                sum += arr[i];
                count++;
            }
        if (count > 0)
            cout << (float)sum / count;
    }

    return 0;
}
