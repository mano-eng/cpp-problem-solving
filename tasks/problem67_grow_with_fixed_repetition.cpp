// Problem 67: Grow with Fixed Repetition
// --------------------------------------
// Read N numbers.
// The sequence must follow this pattern:
// - Each new number must be greater than the previous one.
// - Every number appears exactly B times (same repetition count for all groups).
// - First group defines B.
// - Then every next group must have the same repetition count.
// If all conditions are satisfied → print TRUE
// Otherwise → print FALSE

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int prev;
    cin >> prev;

    int check = 0;
    int B = 0;

    for(int i = 1; i < N; i++)
    {
        int curr;
        cin >> curr;

        // must grow
        if(curr <= prev)
        {
            cout << "FALSE";
            return 0;
        }

        int value = curr;
        int count = 0;

        // count repetition
        while(i < N && curr == value)
        {
            count++;
            i++;

            if(i < N)
                cin >> curr;
        }

        if(check == 0)
        {
            B = count;
            check = 1;
        }
        else
        {
            if(count != B)
            {
                cout << "FALSE";
                return 0;
            }
        }

        prev = value;
        i--; // adjust index

    }

    cout << "TRUE";

    return 0;
}
