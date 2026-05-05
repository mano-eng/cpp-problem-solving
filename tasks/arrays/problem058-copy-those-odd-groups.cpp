/* 
Problem 058

Description:
Processes arrays by extracting odd groups, redistributing elements 
from another array in alternating directions, and applying multiple 
transformations based on counts of -1.
*/

#include <iostream> 
using namespace std; 
 
void copyThose(int A[], int B[], int Z[], int n) 
{ 
    int j = n - 1; 
    int lft = 0; 
    int rht = n - 1; 
 
    for(int i = 0; i < n; ) 
    { 
        if(A[i] % 2 != 0) 
        { 
            int count = 0; 
 
            while(i < n && A[i] % 2 != 0) 
            { 
                count++; 
                i++; 
            } 
 
            if(count >= 2) 
            { 
                for(int k = 0; k < count; k++) 
                { 
                    if(j < 0) break; 
 
                    if(k % 2 == 0) 
                        Z[rht--] = B[j--]; 
                    else 
                        Z[lft++] = B[j--]; 
                } 
            } 
        } 
        else 
        { 
            i++; 
        } 
    } 
 
    while(lft <= rht) 
        Z[lft++] = -1; 
} 
 
int countNeg1(int A[], int n) 
{ 
    int ct = 0; 
 
    for(int i = 0; i < n; i++) 
        if(A[i] == -1) 
            ct++; 
 
    return ct; 
} 
 
void replaceWithNeg1(int A[], int n, int val) 
{ 
    for(int i = 0; i < n; i++) 
    { 
        if(A[i] == val) 
            A[i] = -1; 
    } 
} 
 
int main() 
{ 
    int X[200], Y[200], Z[200]; 
    int Q[300], W[300], S[300]; 
    int D[400], T[400], H[400]; 
 
    int a1, a2, a3, a4, a5, a6; 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
    for(int i = 0; i < 200; i++) cin >> Y[i]; 
 
    copyThose(X, Y, Z, 200); 
 
    a1 = countNeg1(Y, 200); 
    a2 = countNeg1(Z, 200); 
 
    replaceWithNeg1(Z, 200, a1 + a2); 
 
    for(int i = 0; i < 300; i++) cin >> Q[i]; 
    for(int i = 0; i < 300; i++) cin >> W[i]; 
 
    copyThose(Q, W, S, 300); 
 
    a3 = countNeg1(W, 300); 
 
    replaceWithNeg1(S, 300, a3); 
    replaceWithNeg1(Q, 300, a3 + 2); 
 
    a4 = countNeg1(S, 300); 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
    for(int i = 0; i < 200; i++) cin >> Z[i]; 
 
    copyThose(X, Z, Y, 200); 
 
    replaceWithNeg1(Y, 200, a3 + a4); 
 
    for(int i = 0; i < 400; i++) cin >> D[i]; 
    for(int i = 0; i < 400; i++) cin >> T[i]; 
 
    copyThose(D, T, H, 400); 
 
    replaceWithNeg1(H, 400, a3 + a4); 
 
    a5 = countNeg1(D, 400); 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
    for(int i = 0; i < 200; i++) cin >> Z[i]; 
 
    copyThose(X, Z, Y, 200); 
 
    replaceWithNeg1(Y, 200, a3 + a4); 
 
    for(int i = 0; i < 300; i++) cin >> Q[i]; 
    for(int i = 0; i < 300; i++) cin >> W[i]; 
 
    copyThose(Q, W, S, 300); 
 
    a6 = countNeg1(S, 300); 
 
    replaceWithNeg1(S, 300, a6); 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
    for(int i = 0; i < 200; i++) cin >> Z[i]; 
 
    copyThose(X, Z, Y, 200); 
 
    return 0; 
}