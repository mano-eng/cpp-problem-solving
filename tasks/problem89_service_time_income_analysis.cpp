/*
Problem 89 - Service Time and Income Analysis

Description:
The program processes data for nDays.
For each day, it reads N records representing customers.

Each record contains:
- type (M for men, K for kids)
- duration
- waiting time
- price

It determines:
1) The maximum total time (duration + waiting) across all records.
2) Counts the number of men and kids for each day.
3) Calculates the total income per day.
4) If the number of kids exceeds men, it prints that day's income.

Finally, it prints:
- Income for days where kids > men.
- The maximum total time across all days.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int nDays; 
    cin >> nDays; 
 
    int maxTime = -1; // maximum (duration + waiting) 
 
    for(int i = 1; i <= nDays; i++) 
    { 
        int N; 
        cin >> N; 
 
        int ctM = 0, ctK = 0; 
        int income = 0; 
 
        for(int j = 1; j <= N; j++) 
        { 
            char type; 
            int duration, waiting, price; 
 
            cin >> type >> duration >> waiting >> price; 
 
            int totalTime = duration + waiting; 
 
            // maximum time overall
            if(totalTime > maxTime) 
            { 
                maxTime = totalTime; 
            } 
 
            // count men and kids
            if(type == 'M') 
                ctM++; 
            else if(type == 'K') 
                ctK++; 
 
            // income
            income += price; 
        } 
 
        // if kids > men
        if(ctK > ctM) 
        { 
            cout << income << endl; 
        } 
    } 
 
    // maximum time overall
    cout << maxTime << endl; 
 
    return 0; 
}