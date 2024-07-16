// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/

#include <bits/stdc++.h>
using namespace std;

// Solution 1
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int median = n/2;

        if(n&1) median++;

        sort(nums.begin(), nums.end());

        int moves = 0;
        while(median<n)
        {
            moves += nums[median++] - nums[start++];
        }

        return moves;
    }
};

// Time Complexity : O(nlog(n)) + O(n/2) == O(nlog(n))
// Space Complexity : O(1)