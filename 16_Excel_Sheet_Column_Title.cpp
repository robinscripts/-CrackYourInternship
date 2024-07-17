// Link: https://leetcode.com/problems/spiral-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans = "";

        while(columnNumber)
        {
            columnNumber--;
            char ch = (columnNumber%26) + 'A';
            ans += ch;
            columnNumber/=26;
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Time Complexity : O(log(n))
// Space Complexity : O(log(n))