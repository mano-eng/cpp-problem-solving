/* 
Problem 010

Description:
Reads 5 numbers and keeps rotating a subarray 
until the array becomes sorted.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int start, end;

    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    while(true) {

        int count = 0;

        for(int i = 0; i < 4; i++) {
            if(arr[i] > arr[i+1]) {
                count++;
            }
        }

        if(count == 0) break;

        cout << "Enter start and end: ";
        cin >> start >> end;

        if(start < 0 || end >= 5 || start >= end) {
            cout << "Invalid input\n";
            continue;
        }

        int temp = arr[end];
        for(int i = end; i > start; i--) {
            arr[i] = arr[i-1];
        }
        arr[start] = temp;

        for(int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << "Sorted!" << endl;

    return 0;
}