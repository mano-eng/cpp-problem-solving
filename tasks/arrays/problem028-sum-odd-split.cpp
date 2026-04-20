/* 
Problem 028

Description:
Splits odd numbers into two sums: first N odd numbers in sum1, 
and the rest in sum2.
*/

void Function2(int X[], int Size, int N, int &sum1, int &sum2) { 
    sum1 = 0; 
    sum2 = 0; 
    int count = 0; 
 
    for (int i = 0; i < Size; i++) { 
        if (X[i] % 2 != 0) { 
            count++; 
            if (count <= N) 
                sum1 += X[i]; 
            else 
                sum2 += X[i]; 
        } 
    } 
}