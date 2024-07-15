// linke: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// solution
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxprft = 0;
        int mini = prices[0];

        for(int i=1; i<prices.size(); i++)
        {
            maxprft = max(maxprft, (prices[i] - mini));
            mini = min(prices[i],mini);
        }

        return maxprft;

    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)