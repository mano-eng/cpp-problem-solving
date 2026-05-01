/* 
Problem 054

Description:
Generates arrays using a left-region-right pattern, 
counts even pairs, and applies transformations across multiple datasets.
*/

#include <iostream> 
using namespace std; 
 
void generate(int X[], int Y[], int n, int S, int E) 
{ 
    int lft = 0; 
    int rgn = S; 
    int rht = E + 1; 
    int j = 0; 
 
    while(j < n) 
    { 
        for(int i = 0; i < 2; i++) 
        { 
            if(lft < S && j < n) 
            { 
                Y[j] = X[lft]; 
                j++; 
                lft++; 
            } 
        } 
 
        for(int i = 0; i < 2; i++) 
        { 
            if(rgn <= E && j < n) 
            { 
                Y[j] = X[rgn]; 
                j++; 
                rgn++; 
            } 
        } 
 
        for(int i = 0; i < 2; i++) 
        { 
            if(rht < n && j < n) 
            { 
                Y[j] = X[rht]; 
                j++; 
                rht++; 
            } 
        } 
    } 
} 
 
int countEvenPairs(int A[], int n) 
{ 
    int ct = 0; 
 
    for(int i = 0; i < n - 1; i++) 
    { 
        if(A[i] % 2 == 0 && A[i+1] % 2 == 0) 
            ct++; 
    } 
 
    return ct; 
} 
 
void addSecondHalf(int A[], int n, int val) 
{ 
    for(int i = n/2; i < n; i++) 
    { 
        A[i] += val; 
    } 
} 
 
int main() 
{ 
    int X[200], Y[200], Z[600], Q[600], W[600], A[200]; 
    int S, E; 
    int ct1, ct2; 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
    cin >> S >> E; 
 
    generate(X, Y, 200, S, E); 
 
    ct1 = countEvenPairs(X, 200); 
    ct2 = countEvenPairs(Y, 200); 
 
    addSecondHalf(Y, 200, ct1); 
    addSecondHalf(X, 200, ct2); 
 
    for(int i = 0; i < 600; i++) cin >> Z[i]; 
 
    generate(Z, Q, 600, S, E); 
 
    addSecondHalf(Q, 600, 15); 
    addSecondHalf(Z, 600, 25); 
 
    for(int i = 0; i < 200; i++) cin >> X[i]; 
 
    generate(X, Y, 200, S, E); 
 
    ct1 = countEvenPairs(X, 200); 
    ct2 = countEvenPairs(Y, 200); 
 
    addSecondHalf(Y, 200, ct1); 
    addSecondHalf(X, 200, ct2 + 15); 
 
    for(int i = 0; i < 600; i++) cin >> W[i]; 
 
    generate(W, Q, 600, S, E); 
 
    ct1 = countEvenPairs(Q, 600); 
    ct2 = countEvenPairs(W, 600); 
 
    addSecondHalf(W, 600, ct1 + ct2); 
 
    for(int i = 0; i < 200; i++) cin >> Y[i]; 
 
    generate(Y, X, 200, S, E); 
 
    for(int i = 0; i < 600; i++) cin >> Q[i]; 
 
    generate(Q, Z, 600, S, E); 
 
    for(int i = 0; i < 200; i++) cin >> A[i]; 
 
    generate(A, Y, 200, S, E); 
 
    for(int i = 0; i < 600; i++) cin >> W[i]; 
 
    generate(W, Q, 600, S, E); 
 
    return 0; 
}