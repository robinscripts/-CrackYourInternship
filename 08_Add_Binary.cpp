// Link: https://leetcode.com/problems/add-binary/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;

        while(!a.empty() || !b.empty())
        {
            if(!a.empty())
            {
                carry += a.back() - '0';
                a.pop_back();
            }
            if(!b.empty())
            {
                carry += b.back() - '0';
                b.pop_back();
            }
            char ch = carry%2 + '0';
            ans.push_back(ch);
            carry /=2;
        }

        if(carry > 0) ans.push_back(carry+'0');
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


// Time Complexity : max(a.length(), b.length()) == linear time complexity = O(n) 
// Space Complexity : O(n)