/* 
Problem 029

Description:
Replaces -1 values in array X using pairs from array Y 
based on a specific difference condition.
*/

#include <iostream>  
using namespace std;  
  
int main()  
{  
    int X[30], Y[30];  
    int ct = 0;  
  
    for(int i = 0; i < 30; i++)  
        cin >> X[i];  
  
    for(int i = 0; i < 30; i++)  
        cin >> Y[i];  
  
    for(int i = 0; i < 30; i++)  
        if(X[i] == -1)  
            ct++;  
  
    int j = 0;  
  
    for(int i = 0; i < 29; i++)  
    {  
        if(X[i] == -1)  
        {  
            while(j < 29)  
            {  
                if( (Y[j] - Y[j+1] == ct) || (Y[j+1] - Y[j] == ct) )  
                {  
                    X[i]   = Y[j]; 
                    X[i+1] = Y[j+1]; 
                    j++; 
                    break;  
                }  
                j++;  
            }  
        }  
    }  
  
    for(int i = 0; i < 30; i++)  
        cout << X[i] << " ";  
  
    return 0;  
}