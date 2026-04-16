/* 
Problem 011

Description:
Reads votes for 3 candidates, finds max and min totals, 
then determines the highest candidate in a selected index.
*/

#include <iostream> 
using namespace std; 
 
int main() { 
 
    int x[4], y[4], z[4]; 
    int T1 = 0, T2 = 0, T3 = 0; 
    int max, mini; 
    int f; 
 
    cout << "Enter votes for candidate X:\n"; 
    for(int i = 0; i < 4; i++) { 
        cin >> x[i]; 
        T1 += x[i]; 
    } 
 
    cout << "Enter votes for candidate Y:\n"; 
    for(int i = 0; i < 4; i++) { 
        cin >> y[i]; 
        T2 += y[i]; 
    } 
 
    cout << "Enter votes for candidate Z:\n"; 
    for(int i = 0; i < 4; i++) { 
        cin >> z[i]; 
        T3 += z[i]; 
    } 
 
    max = T1; 
    mini = T1; 
 
    if(T2 > max) 
        max = T2; 
 
    if(T3 > max) 
        max = T3; 
 
    if(T2 < mini) 
        mini = T2; 
 
    if(T3 < mini) 
        mini = T3; 
 
    cout << "Max = " << max << endl; 
    cout << "Min = " << mini << endl; 
 
    cout << "Enter faculty (0 to 3): "; 
    cin >> f; 
 
    if(x[f] > y[f] && x[f] > z[f]) 
        cout << "X is highest\n"; 
    else if(y[f] > x[f] && y[f] > z[f]) 
        cout << "Y is highest\n"; 
    else 
        cout << "Z is highest\n"; 
 
    return 0; 
}