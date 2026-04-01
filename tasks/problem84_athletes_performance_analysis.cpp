/*
Problem 84 - Athletes Performance Analysis

Description:
The program processes data for nK athletes.
For each athlete, it reads gender, age, duration (du), and number of jumps.

It determines:
1) The average duration (du) for all boys (gender 'B').
2) For each athlete, finds the maximum jump height.
3) Counts how many times two consecutive athletes have the same age
   and the same maximum jump height.

Finally, it prints:
- The average duration for boys (if any).
- The count of consecutive matching athletes.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int nK; 
    cin >> nK; 
 
    int sum = 0, ct = 0; // boys average 
    int ct2 = 0; // contiguous 
 
    int prevAge, prevMaxH; 
 
    for(int i = 1; i <= nK; i++) 
    { 
        char gn; 
        int age, du, nj; 
        cin >> gn >> age >> du >> nj; 
 
        // boys 
        if(gn == 'B') 
        { 
            sum += du; 
            ct++; 
        } 
 
        // highest jump 
        int maxh = 0; 
 
        for(int j = 1; j <= nj; j++) 
        { 
            int h; 
            cin >> h; 
 
            if(h > maxh) 
                maxh = h; 
        } 
 
        // contiguous (from second athlete) 
        if(i > 1 && age == prevAge && maxh == prevMaxH) 
        { 
            ct2++; 
        } 
 
        // update 
        prevAge = age; 
        prevMaxH = maxh; 
    } 
 
    // average boys 
    if(ct > 0) 
        cout << (sum / ct) << endl; 
 
    // contiguous count 
    cout << ct2 << endl; 
 
    return 0; 
}