/* 
Problem 052

Description:
Appends all words with odd length from the string 
to the end of the same string.
*/

#include <iostream> 
using namespace std; 
 
void solve(char X[]) 
{ 
    int len = 0; 
 
    while(X[len] != '\0') 
    { 
        len++; 
    } 
 
    int end = len; 
 
    int i = 0; 
    while(i < len) 
    { 
        while(i < len && X[i] == ' ') 
        { 
            i++; 
        } 
 
        int start = i; 
 
        while(i < len && X[i] != ' ') 
        { 
            i++; 
        } 
 
        int wordLen = i - start; 
 
        if(wordLen % 2 != 0) 
        { 
            X[end] = ' '; 
            end++; 
 
            for(int j = start; j < start + wordLen; j++) 
            { 
                X[end] = X[j]; 
                end++; 
            } 
        } 
    } 
 
    X[end] = '\0'; 
} 
 
int main() 
{ 
    char X[1000]; 
    cin.getline(X, 1000); 
    solve(X); 
    cout << X << endl; 
    return 0; 
}