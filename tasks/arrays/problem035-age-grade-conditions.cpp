/* 
Problem 035

Description:
Performs operations on age and grade arrays based on user choice.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int age[30], grade[30]; 
 
    for(int i = 0; i < 30; i++) 
        cin >> age[i]; 
 
    for(int i = 0; i < 30; i++) 
        cin >> grade[i]; 
 
    int choice; 
    cin >> choice; 
 
    if(choice == 1) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(age[i] > 20) 
                cout << grade[i] << " "; 
        } 
    } 
 
    else if(choice == 2) 
    { 
        for(int i = 0; i < 30; i++) 
        { 
            if(grade[i] > 90) 
                cout << age[i] << " "; 
        } 
    } 
 
    else if(choice == 3) 
    { 
        int sum = 0, count = 0; 
 
        for(int i = 0; i < 30; i++) 
        { 
            if(age[i] > 25) 
            { 
                sum += grade[i]; 
                count++; 
            } 
        } 
 
        if(count != 0) 
            cout << (double)sum / count; 
    } 
 
    return 0; 
}