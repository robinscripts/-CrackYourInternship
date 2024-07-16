// Link: https://leetcode.com/problems/find-peak-element/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;

        while(start<end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid] > nums[mid+1])
                end = mid;
            else
                start = mid + 1;
        }
        return start;
    }
};

// Time Complexity : O(nlog(n))
// Space Complexity : O(1)