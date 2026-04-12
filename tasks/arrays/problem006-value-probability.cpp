/* 
Problem 006

Description:
Reads 50 numbers and calculates the probability 
of a given value appearing.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
    int arr[50]; 
    int i, value; 
    int count = 0; 
 
    cout << "Enter 50 numbers:\n"; 
    for(i = 0; i < 50; i++) { 
        cin >> arr[i]; 
    } 
 
    cout << "Enter value: "; 
    cin >> value; 
 
    for(i = 0; i < 50; i++) { 
        if(arr[i] == value) { 
            count++; 
        } 
    } 
 
    float probability = (float)count / 50; 
 
    cout << "The probability of " << value << " = " << probability << endl; 
 
    return 0; 
}