/*
Program: Influencer Tweets Analysis

Description:
This program reads data for several influencers including their followers
and tweets. For each tweet it reads likes and retweets. The program counts
consecutive tweets with the same likes, finds the influencer with the lowest
number of followers, and calculates the average retweets for influencer 100.
*/

#include <iostream>
using namespace std;

int main()
{
    int NInf;
    cin >> NInf;

    int minFollowers;
    int minIndex = 0;

    for (int i = 0; i < NInf; i++)
    {
        int followers, tweets;
        cin >> followers >> tweets;

        // track influencer with lowest followers
        if (i == 0)
        {
            minFollowers = followers;
            minIndex = 1;
        }
        else if (followers < minFollowers)
        {
            minFollowers = followers;
            minIndex = i + 1;
        }

        int prevLikes = -1;
        int countSame = 0;

        int sumRet = 0, ct = 0;

        for (int j = 0; j < tweets; j++)
        {
            int likes, retweets;
            cin >> likes >> retweets;

            // count consecutive tweets with same likes
            if (j > 0 && likes == prevLikes)
                countSame++;

            prevLikes = likes;

            // collect retweets for influencer 100
            if (i == 99)
            {
                sumRet += retweets;
                ct++;
            }
        }

        cout << "Influencer " << i+1 << " same likes = " << countSame << endl;

        // print average retweets for influencer 100
        if (i == 99 && ct > 0)
        {
            cout << "Average retweets = " << (float)sumRet / ct << endl;
        }
    }

    // display influencer with lowest followers
    cout << "Influencer with lowest followers = " << minIndex << endl;

    return 0;
}
