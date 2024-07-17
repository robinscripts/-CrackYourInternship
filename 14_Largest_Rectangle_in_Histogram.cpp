// Link: https://leetcode.com/problems/valid-palindrome-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> nextSmaller(vector<int> arr, int n)
    {
        stack<int> st;
        st.push(-1);

        vector<int> ans(n); 

        for(int i=n-1; i>=0; i--)
        {
            int curr = arr[i];

            while(st.top() != -1 && arr[st.top()] >= curr)
                st.pop();
            
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller(vector<int> arr, int n)
    {
        stack<int> st;
        st.push(-1);

        vector<int> ans(n); 

        for(int i=0; i<n; i++)
        {
            int curr = arr[i];

            while(st.top() != -1 && arr[st.top()] >= curr)
                st.pop();
            
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> nexts(n);
        nexts = nextSmaller(heights,n);
        vector<int> prevs(n);
        prevs = prevSmaller(heights,n);

        int maxArea = INT_MIN;

        for(int i=0; i<n; i++)
        {
            int h = heights[i];

            if(nexts[i] == -1)
                nexts[i] = n;

            int b = nexts[i] - prevs[i] -  1;

            int area= h*b;
            maxArea = max(area,maxArea);
        }
        return maxArea;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(n)