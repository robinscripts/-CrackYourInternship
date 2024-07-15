// Link: https://leetcode.com/problems/valid-palindrome-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m+n-1;
        int j = m-1;
        int k = n-1;

        while(k>=0)
        {
            if(j >= 0 && nums1[j] > nums2[k])
            {
                nums1[i] = nums1[j--];
            }
            else
            {
                nums1[i] = nums2[k--];
            }
            i--;
        }
    }
};

// Time Complexity : O(m+n)
// Space Complexity : O(1)