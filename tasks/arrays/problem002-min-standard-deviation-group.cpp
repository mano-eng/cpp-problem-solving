/* 
Problem 002

Description:
Reads 5 groups of 50 numbers and prints the group 
with the smallest variance (SD without square root).
*/

#include <iostream> 
using namespace std; 
 
int main() { 
    int arr[50]; 
    double min_sd = 1e9; 
    int best_group = 0; 
 
    for(int g = 1; g <= 5; g++) { 
 
        double sum = 0; 
 
        for(int i = 0; i < 50; i++) { 
            cin >> arr[i]; 
            sum += arr[i]; 
        } 
 
        double avg = sum / 50; 
 
        double sd = 0; 
        for(int i = 0; i < 50; i++) { 
            sd += (arr[i] - avg) * (arr[i] - avg); 
        } 
 
        sd = sd / 50; 
 
        if(sd < min_sd) { 
            min_sd = sd; 
            best_group = g; 
        } 
    } 
 
    cout << best_group << endl; 
 
    return 0; 
}