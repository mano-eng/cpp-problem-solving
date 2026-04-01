/*
Problem 81 - Regions Analysis

Description:
This program processes data for N regions.
For each region, it reads number of days, and for each day reads 3 values.

It calculates:
1) The region with the maximum number of days.
2) Counts days in region 5 where only q3 > 0 and q1 = q2 = 0.
*/
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int nR; 
    cin >> nR; 
 
    int max1 = 0, pos = 0; 
    int ctday = 0; 
 
    for(int i = 1; i <= nR; i++) 
    { 
        int day; 
        cin >> day; 
 
        for(int d = 1; d <= day; d++) 
        { 
            int q1, q2, q3; 
            cin >> q1 >> q2 >> q3; 
 
            if(i == 5 && q3 > 0 && q1 == 0 && q2 == 0) 
            { 
                ctday++; 
            } 
        } 
 
        if(day > max1) 
        { 
            max1 = day; 
            pos = i; 
        } 
    } 
 
    cout << pos << endl; 
    cout << ctday; 
 
    return 0; 
}