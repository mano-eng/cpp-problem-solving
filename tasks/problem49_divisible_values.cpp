#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int N, num = 1, ct = 0; 
 
    cin >> N; 
 
    while(num < N) 
    { 
        if(N % num == 0) 
        { 
            cout << num << " "; 
            ct++; 
        } 
 
        num++; // زود ال num  1  كل مره 
    } 
 
    cout << "\n" << ct; ب=
 
    return 0; 
}