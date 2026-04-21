/* 
Problem 031

Description:
Finds a subarray in Y with the same sum as a segment in X, 
then performs additional sum operations on Y and Q.
*/

#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int X[200], Y[200], Q[200]; 
    int start, end, length; 
    int totalX = 0, totalYpart = 0; 
    int pos; 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
    for(int i = 0; i < 200; i++) cin >> Y[i]; 
 
    cin >> start >> end; 
 
    for(int i = start; i <= end; i++) 
    { 
        totalX += X[i]; 
    } 
 
    length = end - start + 1; 
 
    for(pos = 0; pos <= 200 - length; pos++) 
    { 
        totalYpart = 0; 
 
        for(int i = pos; i < pos + length; i++) 
        { 
            totalYpart += Y[i]; 
        } 
 
        if(totalYpart == totalX) 
            break; 
    } 
 
    for(int i = 0; i < 200; i++) 
    { 
        if(i < pos || i >= pos + length) 
        { 
            cin >> Y[i]; 
        } 
    } 
 
    int totalLastY = 0; 
    for(int i = 150; i < 200; i++) 
    { 
        totalLastY += Y[i]; 
    } 
 
    cout << totalLastY << endl; 
 
    for(int i = 0; i < 200; i++) 
    { 
        cin >> Q[i]; 
    } 
 
    int totalLastQ = 0; 
    for(int i = 150; i < 200; i++) 
    { 
        totalLastQ += Q[i]; 
    } 
 
    cout << totalLastQ << endl; 
 
    cin >> start >> end; 
 
    int totalQpart = 0; 
    length = end - start + 1; 
 
    for(int i = start; i <= end; i++) 
    { 
        totalQpart += Q[i]; 
    } 
 
    for(pos = 0; pos <= 200 - length; pos++) 
    { 
        totalYpart = 0; 
 
        for(int i = pos; i < pos + length; i++) 
        { 
            totalYpart += Y[i]; 
        } 
 
        if(totalYpart == totalQpart) 
            break; 
    } 
 
    return 0; 
}