/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* ans = new ListNode(0);
        ListNode* head = ans;
        int cin = 0;
        while(l1 != NULL || l2 != NULL || cin != 0){
            int digit = 0;
            if(l1 != NULL){
                digit += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                digit += l2->val;
                l2 = l2->next;
            }
            digit += cin;
            cin = digit / 10;
            digit = digit % 10;
            ans -> next = new ListNode(digit);
            ans = ans -> next;
        }
        return head->next;
    }
};

