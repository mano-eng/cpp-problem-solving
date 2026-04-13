/* 
Problem 007

Description:
Reads 50 numbers and sorts them in ascending order.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
    int arr[50], x; 
 
    for (int i = 0; i < 50; i++) 
        cin >> arr[i]; 
 
    for (int i = 0; i < 50 ;  i++) { 
        for (int j = i + 1; j < 50; j++) { 
            if (arr[j] < arr[i]) { 
                x = arr[j]; 
                arr[j] = arr[i]; 
                arr[i] = x; 
            } 
        } 
    } 
 
    for (int i = 0; i < 50; i++) 
        cout << arr[i] << " "; 
 
    return 0; 
}