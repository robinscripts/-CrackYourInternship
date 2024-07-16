// Link: https://leetcode.com/problems/valid-palindrome-ii/

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
    int height(TreeNode* root, int &ans)
    {
        if(root == nullptr) return 0;

        int leftHeight = height(root->left, ans);
        int rightHeight = height(root->right, ans);

        ans= max(ans, 1 + leftHeight + rightHeight);
        return 1 + max(leftHeight,rightHeight);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;

        int ans = 0;
        height(root, ans);

        return ans - 1; // since the diameter is defined in terms of edges, not nodes.
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)