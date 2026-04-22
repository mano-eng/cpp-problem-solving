/* 
Problem 036

Description:
Performs operations on height and weight arrays based on user choice.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int h[30], w[30]; 
 
    for(int i = 0; i < 30; i++) 
        cin >> h[i]; 
 
    for(int i = 0; i < 30; i++) 
        cin >> w[i]; 
 
    int choice; 
    cin >> choice; 
 
    if(choice == 1) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(h[i] > 170 && w[i] > 100) 
                cout << h[i] << " "; 
        } 
    } 
 
    else if(choice == 2) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(h[i] < 80) 
                cout << w[i] << " "; 
        } 
    } 
 
    else if(choice == 3) 
    { 
        int sum = 0, count = 0; 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(h[i] > 100) 
            { 
                sum += w[i]; 
                count++; 
            } 
        } 
 
        if(count != 0) 
            cout << (double)sum / count; 
    } 
 
    return 0; 
}