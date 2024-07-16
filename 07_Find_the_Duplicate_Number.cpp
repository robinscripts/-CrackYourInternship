// Link: https://leetcode.com/problems/find-the-duplicate-number/description/

#include <bits/stdc++.h>
using namespace std;

// Solution 2
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            int index = abs(nums[i]) - 1;

            nums[index] *= -1;

            if(nums[index] > 0) return abs(nums[i]);
        }

        return -1;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)

// Solution 1
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//      unordered_map<int,int> mp;

//      for(int i:nums)
//      {
//          mp[i]++;
//          if(mp[i] > 1) return i;
//      }

//      return -1;
//     }
// };

// Time Complexity : O(n)
// Space Complexity : O(n)