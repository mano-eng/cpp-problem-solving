/* 
Problem 040

Description:
Analyzes temperatures in groups of 10 days by finding minimum, 
average, and days above average.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[30]; 
 
    for(int i = 0; i < 30; i++) 
        cin >> X[i]; 
 
    for(int i = 0; i < 30; i += 10) 
    { 
        int min = X[i]; 
        int day = i; 
 
        for(int j = i; j < i + 10; j++) 
        { 
            if(X[j] < min) 
            { 
                min = X[j]; 
                day = j; 
            } 
        } 
 
        cout << "Min day: " << day + 1 << endl; 
 
        int sum = 0; 
 
        for(int j = i; j < i + 10; j++) 
            sum += X[j]; 
 
        double avg = (double)sum / 10; 
 
        cout << "Average: " << avg << endl; 
 
        cout << "Days greater than avg: "; 
 
        for(int j = i; j < i + 10; j++) 
        { 
            if(X[j] > avg) 
                cout << j + 1 << " "; 
        } 
 
        cout << endl << "------" << endl; 
    } 
 
    return 0; 
}