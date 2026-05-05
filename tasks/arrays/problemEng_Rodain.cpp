#include <iostream>
using namespace std;

int main()
{
    char X[100];  
    gets(X);
 
    for(int i = 0; X[i] != '\0'; i++)
    {
        if(X[i]=='a' || X[i]=='e' || X[i]=='i' || X[i]=='o' || X[i]=='u')
        {
            X[i] = '@';
        }
    }

   
    cout << X;

    return 0;
}