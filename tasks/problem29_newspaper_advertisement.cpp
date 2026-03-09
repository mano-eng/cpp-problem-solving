/*
Problem 29: Newspaper Advertisement Cost

Description:
Advertising in newspapers depends on three factors:
1) The size of the advertisement (in cm²).
2) The page number where the ad will appear.
3) The day of the advertisement.

Rules:
- The price for 1 cm² is 4.35$.
- If the ad is placed on the first page, an additional 50% is added.
- If the ad is placed on Friday, an additional 40% is added.

The program reads the advertisement specifications for 3 customers,
counts how many ads were placed on the first page, and determines
the lowest advertisement cost.
*/

#include <iostream>
using namespace std;

int main()
{
    double size, price;
    int page;
    string day;

    int firstPageCount = 0;
    double minCost = 999999;

    for(int i = 0; i < 3; i++)
    {
        cin >> size;
        cin >> page;
        cin >> day;

        price = size * 4.35;

        if(page == 1)
        {
            price = price * 1.5;
            firstPageCount++;
        }

        if(day == "Friday")
        {
            price = price * 1.4;
        }

        if(price < minCost)
            minCost = price;
    }

    cout << "Ads in first page = " << firstPageCount << endl;
    cout << "Lowest advertisement cost = " << minCost << endl;

    return 0;
}