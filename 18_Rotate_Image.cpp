// Link: https://leetcode.com/problems/rotate-image/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Transpose of matrix
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i<j)
                    swap(matrix[i][j],matrix[j][i]);
            }
        }

        // Interchange columns
        for(int i=0; i<n; i++)
        {
            int st = 0;
            int end = n-1;
            while(st<end)
            {
                swap(matrix[i][st++], matrix[i][end--]);
            }
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)