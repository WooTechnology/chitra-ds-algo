// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newList = new ListNode(-1); // new list for storing the sum
        ListNode* curr = newList; // pointer to newList list
        int carry = 0,sum = 0;
        while(l1 != NULL || l2!= NULL){
            int x = (l1 == NULL? 0: l1->val);
            int y = (l2 == NULL? 0: l2->val);
            sum = carry + x + y;
            carry = sum/10;
            sum = sum%10;
            
            curr->next = new ListNode(sum);
            curr = curr->next;
            
            if(l1 != NULL) l1=l1->next;
            if(l2 != NULL) l2=l2->next;
        }
        // leftover carry 
        if(carry>0){
            curr->next = new ListNode(carry);
            curr = curr->next;
        }
        return newList->next;
    }
};