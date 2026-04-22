/* 
Problem 034

Description:
Performs different operations based on choice using array average.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30]; 
 
    for(int i = 0; i < 30; i++) 
        cin >> X[i]; 
 
    int sum = 0; 
    for(int i = 0; i < 30; i++) 
        sum += X[i]; 
 
    double avg = (double)sum / 30; 
 
    int choice; 
    cin >> choice; 
 
    if(choice == 1) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] % 2 == 0 && X[i] > 100) 
                cout << X[i] << " "; 
        } 
    } 
    else if(choice == 2) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] > avg) 
                cout << X[i] << " "; 
        } 
    } 
    else if(choice == 3) 
    { 
        int sum2 = 0, count = 0; 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(X[i] > avg) 
            { 
                sum2 += X[i]; 
                count++; 
            } 
        } 
 
        if(count != 0) 
            cout << (double)sum2 / count; 
    } 
 
    return 0; 
}