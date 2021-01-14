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

//Here the values have been swapped, need to understancd how to swap the links themselves
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        if(head -> next -> next == NULL){
            int t = head -> val;
            head -> val = head -> next -> val;
            head -> next -> val = t;
            return head;
        }
        ListNode* p1 = head;
        ListNode* p2 = head -> next;
        while(p2 -> next != NULL || p2 != NULL || p1 -> next != NULL || p1 != NULL){
            int t = p2 -> val;
            p2 -> val = p1 -> val;
            p1 -> val = t;
            if(p2 -> next == NULL){
                break;
            }
            p1 = p2 -> next;
            if(p1 -> next == NULL){
                break;
            }
            p2 = p1 -> next;
        }
        return head;
    }
};