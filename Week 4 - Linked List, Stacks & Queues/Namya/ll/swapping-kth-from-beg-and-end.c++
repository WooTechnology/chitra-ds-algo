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

//Linnk to the problem at : https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p1 = head;
        ListNode* p2 = head;
        int c = 1;
        while(p1 != NULL){
            p1 = p1 -> next;
            c += 1;
        }
        ListNode* pb = head;
        ListNode* pe = head;
        c = c - k;
        int l = 1;
        k = k - 1;
        c = c - 1;
        while(k--){
            pb = pb -> next;
        }
        while(c--){
            pe= pe-> next;
        }
        int t = pb -> val;
        pb -> val = pe -> val;
        pe -> val = t;
        return head;
    }
};