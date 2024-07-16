// Link: https://leetcode.com/problems/sort-colors/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid<=high)
        {
            if(arr[mid] == 0)
            {
                swap(arr[low++],arr[mid++]);
            }
            else if(arr[mid]==2)
            {
                swap(arr[high--],arr[mid]);
            }
            else mid++;
        }
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)