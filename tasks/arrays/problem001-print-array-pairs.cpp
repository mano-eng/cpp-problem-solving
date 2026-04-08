/* 
Problem 001 - Print Array Pairs

Description:
Reads 50 numbers and prints all pairs (i, j) where j >= i.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
    int arr[50]; 
 
    for(int i = 0; i < 50; i++) { 
        cin >> arr[i]; 
    } 
 
    for(int i = 0; i < 50; i++) { 
        for(int j = i; j < 50; j++) { 
            cout << arr[i] << " " << arr[j] << endl; 
        } 
    } 
 
    return 0; 
}