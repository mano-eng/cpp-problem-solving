/*
Problem 82 - Digit Difference Sum

Description:
The program reads an integer N, then processes pairs of numbers.
For each odd index i (1, 3, 5, ...), it extracts:
- The i-th digit from the first number.
- The (i+1)-th digit from the second number.

It then computes the difference (d1 - d2) and accumulates the result.
Finally, it prints the total sum.
*/

#include <iostream>
using namespace std;

int main() 
{ 
    int N; 
    cin >> N; 

    int num1, num2; 
    int total = 0; 

    for(int i = 1; i <= N; i += 2) 
    { 
        cin >> num1 >> num2; 

        int t1 = num1; 
        int t2 = num2; 

        int c = 1; 

        // extract i-th digit from num1 
        while(c < i) 
        { 
            t1 /= 10; 
            c++; 
        } 
        int d1 = t1 % 10; 

        c = 1; 

        // extract (i+1)-th digit from num2 
        while(c < i + 1) 
        { 
            t2 /= 10; 
            c++; 
        } 
        int d2 = t2 % 10; 

        total += (d1 - d2); 
    } 

    cout << total; 

    return 0; 
}