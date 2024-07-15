// Link: https://leetcode.com/problems/two-sum/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++)
        {
            int complement = target - nums[i];
            if(mp.find(complement) != mp.end()) return {i,mp[complement]};

            mp[nums[i]] = i;
        }

        return {};

    }
};

// Time Complexity : O(n)
// Space Complexity : O(n)