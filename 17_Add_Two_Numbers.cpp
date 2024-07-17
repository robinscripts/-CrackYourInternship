
// Link: https://leetcode.com/problems/valid-palindrome-ii/

#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;

        int carry = 0;
        while(l1 || l2)
        {
            int curr = carry;
            if(l1)
            {
                curr += l1->val;
                l1 = l1 -> next;
            } 
            if(l2)
            {
                curr += l2->val;
                l2 = l2->next;
            } 
            ListNode* newNode= new ListNode(curr%10);
            temp->next = newNode;
            temp = temp -> next;
            carry = curr/10;
        }

        if(carry)
        {
            ListNode* newNode = new ListNode(carry);
            temp->next = newNode;
            temp = temp -> next;
        }
        return ans -> next;
    }
};

// Time Complexity : O(n)  n = max(l1.length, l2.length);
// Space Complexity : O(n) n = max(l1.length, l2.length);