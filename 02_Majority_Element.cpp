// link: https://leetcode.com/problems/majority-element/description/
// Moores voting algo

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // solution 1
        // int f = nums.size()/2;
        // unordered_map<int,int> mp;

        // for(auto i:nums)
        //     mp[i]++;

        // for(auto i:mp)
        // {
        //     if(i.second>f)
        //         return i.first;
        // }    

        // return -1; 
        
           
        // solution 2
        // int f = nums.size()/2;
        // sort(nums.begin(),nums.end());


        // for(int i=0; i<nums.size(); i++)
        // {
        //     int freq = 1;
        //     int temp = nums[i];
        //     while(i + 1 < nums.size() && temp == nums[i + 1])
        //     {
        //         freq++;
        //         i++;
        //     }
        //     if(freq>f)
        //         return temp;
        // }

        // return 0;

        // solution 3 moore's voting algorithim
        int n = nums.size();
        int count = 0;
        int element;

        for(int i=0; i<n; i++)
        {
            if(count == 0)
            {
                element =nums[i];
            }
            if(element == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return element;
    }
};

// For Solution 1
// Time Complexity : O(n)
// Space Complexity : O(n)

// For Solution 2
// Time Complexity : O(nlog(n))
// Space Complexity : O(1)

// For Solution 3
// Time Complexity : O(n)
// Space Complexity : O(1)