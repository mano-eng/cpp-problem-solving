// problem67_grow_with_fixed_repetition.cpp
//
// Read numbers one by one
// Check if numbers follow this pattern:
// 1. Each new number must be greater than the previous (grow)
// 2. Each number repeats B times (same count for all groups)
// First group defines B
// If any group breaks the pattern → print FALSE
// Otherwise → print TRUE

#include <iostream>
using namespace std;

int main()
{
    int prev;
    cin >> prev;

    int check = 0;
    int B = 0;

    int curr;

    while(cin >> curr)
    {
        // check grow
        if(curr <= prev)
        {
            cout << "FALSE";
            return 0;
        }

        int value = curr;
        int count = 0;

        // count repetition
        while(curr == value)
        {
            count++;
            if(!(cin >> curr))
                break;
        }

        // set or check B
        if(check == 0)
        {
            B = count;
            check = 1;
        }
        else if(count != B)
        {
            cout << "FALSE";
            return 0;
        }

        // update prev
        prev = value;
    }

    cout << "TRUE";

    return 0;
}