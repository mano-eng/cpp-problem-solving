/*
Problem 83 - Infection Data Analysis

Description:
The program processes data for NInf cases.
For each case, it reads nf (a value) and nt (number of records).

It determines:
1) The position of the case with the minimum nf value.
2) For each case, counts how many times consecutive L values are equal.
3) If the case index is 100, it calculates the average of all R values.

Finally, it prints:
- Count of repeated consecutive L values for each case.
- The position of the minimum nf.
- The average of R values for case 100 (if exists).
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int NInf; 
    cin >> NInf; 
 
    int minF = 1000000000, pos = 0; 
    int sum = 0, ct = 0; 
 
    for(int i = 1; i <= NInf; i++) 
    { 
        int nf, nt; 
        cin >> nf >> nt; 
 
        if(nf < minF) 
        { 
            minF = nf; 
            pos = i; 
        } 
 
        int ct2 = 0; 
 
        int L, R; 
        cin >> L >> R; 
        int pos2 = L; 
 
        if(i == 100) 
        { 
            sum += R; 
            ct++; 
        } 
 
        for(int j = 2; j <= nt; j++) 
        { 
            cin >> L >> R; 
 
            if(L == pos2) 
            { 
                ct2++; 
            } 
 
            pos2 = L; 
 
            if(i == 100) 
            { 
                sum += R; 
                ct++; 
            } 
        } 
 
        cout << ct2 << endl; 
    } 
 
    cout << pos << endl; 
 
    if(ct > 0) 
    { 
        cout << (sum / ct) << endl; 
    } 
 
    return 0; 
}