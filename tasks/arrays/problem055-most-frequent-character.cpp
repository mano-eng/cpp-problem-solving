/* 
Problem 055

Description:
Finds the most repeated non-space character in a string 
and prints its count.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char X[200]; 
    gets(X); 
 
    char maxChar = ' '; 
    int maxCount = 0; 
 
    for(int i = 0; X[i] != '\0'; i++) 
    { 
        if(X[i] != ' ') 
        { 
            int ct = 0; 
 
            for(int j = 0; X[j] != '\0'; j++) 
            { 
                if(X[j] == X[i]) 
                    ct++; 
            } 
 
            if(ct > maxCount) 
            { 
                maxCount = ct; 
                maxChar = X[i]; 
            } 
        } 
    } 
 
    cout << "The most repeated letter is '" << maxChar << "'" << endl; 
    cout << "The count: " << maxCount << endl; 
 
    return 0; 
}