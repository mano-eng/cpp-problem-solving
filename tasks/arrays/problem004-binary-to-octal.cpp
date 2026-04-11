/* 
Problem 004

Description:
Reads 20 binary digits and converts them into an octal number.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
 
    int arr[20], sum = 0; 
 
    cout << "Enter 20 binary digits: "; 
 
    for (int i = 0; i < 20; i++) { 
        cin >> arr[i]; 
 
        while (arr[i] != 0 && arr[i] != 1) { 
            cout << "Enter 0 or 1 only: "; 
            cin >> arr[i]; 
        } 
    } 
 
    cout << "The Octal number is: "; 
 
    for (int j = 19; j >= 0; j -= 3) { 
 
        sum = 0; 
 
        if (j >= 0 && arr[j] == 1) 
            sum += 1; 
 
        if (j - 1 >= 0 && arr[j - 1] == 1) 
            sum += 2; 
 
        if (j - 2 >= 0 && arr[j - 2] == 1) 
            sum += 4; 
 
        cout << sum; 
    } 
 
    return 0; 
}