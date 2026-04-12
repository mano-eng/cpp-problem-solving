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
 
    for (int i = 0; i < 100; i++) 
        arr[i] = 0; 
 
    int val; 
    cin >> val; 
 
    arr[0] = val; 
 
    int count = 0; 
 
    while (1) { 
 
        if (count % 2 == 0) 
            cout << "Player 1\n"; 
        else 
            cout << "Player 2\n"; 
 
        int pos; 
        cin >> pos; 
 
        int num1, num2; 
        cin >> num1 >> num2; 
 
        if (arr[pos] <= 1 || num1 * num2 != arr[pos]) { 
            cout << "Lose\n"; 
            break; 
        } 
 
        arr[pos] = num1; 
 
        for (int i = 0; i < 100; i++) { 
            if (arr[i] == 0) { 
                arr[i] = num2; 
                break; 
            } 
        } 
 
        for (int i = 0; i < 100; i++) 
            cout << arr[i] << " "; 
        cout << endl; 
 
        count++; 
    } 
 
    return 0; 
}