/*
Problem 68 - Twitter Influencers Analysis

Description:
This program processes data for multiple Twitter influencers.
For each influencer, it reads followers count and tweets data (likes & retweets).
It determines:
1) The influencer with the minimum number of followers.
2) The average retweets for influencer number 100 (if exists).
3) For each influencer, counts how many times two consecutive tweets have the same number of likes.
*/

#include <iostream>
using namespace std;

int main()
{
    int NInf;
    cin >> NInf;

    int followers;
    int minFollowers = 999999, pos = 0;

    for(int i = 1; i <= NInf; i++)
    {
        cin >> followers;

        if(followers < minFollowers)
        {
            minFollowers = followers;
            pos = i;
        }

        int NT;
        cin >> NT;

        int likes, retweets;
        int prevLikes = -1;
        int ctSame = 0;
        int sumRet = 0;

        for(int j = 1; j <= NT; j++)
        {
            cin >> likes >> retweets;

            if(i == 100)
                sumRet += retweets;

            if(j > 1 && likes == prevLikes)
                ctSame++;

            prevLikes = likes;
        }

        cout << ctSame << endl;

        if(i == 100)
        {
            double avg = 0;
            if(NT != 0)
                avg = (double)sumRet / NT;

            cout << avg << endl;
        }
    }

    cout << pos << endl;

    return 0;
}