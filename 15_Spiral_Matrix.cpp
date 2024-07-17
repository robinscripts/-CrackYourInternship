// Link: https://leetcode.com/problems/spiral-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int total_count = rows*cols;
        vector<int> ans(total_count);

        int row_start = 0, row_end = rows-1;
        int col_start = 0, col_end = cols-1;

        int t = 0;
        while(t<total_count)
        {
            for(int i = col_start; i<= col_end && t < total_count; i++)
            {
                ans[t++] = matrix[row_start][i];
            }
            row_start++;

            for(int i = row_start; i<= row_end && t < total_count; i++)
            {
                ans[t++] = matrix[i][col_end];
            }
            col_end--;

            for(int i = col_end; i>= col_start && t < total_count; i--)
            {
                ans[t++] = matrix[row_end][i];
            }
            row_end--;

            for(int i = row_end; i>= row_start && t < total_count; i--)
            {
                ans[t++] = matrix[i][col_start];
            }
            col_start++;
        }

        
        return ans;
    }
};

// Time Complexity : O(rows*cols)
// Space Complexity : O(1)