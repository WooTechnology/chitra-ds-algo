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

//Problem : https://leetcode.com/problems/remove-duplicates-from-sorted-list
class Solution {
public:
    //This is an n**2 solution approximately
    //take it from the next element every time
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return head;
        } 
        ListNode* p1 = head;
         ListNode* p2 =head -> next;
        while(p1 != NULL){
            p2 = p1 -> next;
            while(p2 != NULL){
                if(p1 -> val == p2 -> val){
                    ListNode* t = p2;
                    p2 = p2 -> next;
                    p1 -> next = p2;
                    delete(t);
                }
                else{
                    p2 = p2 -> next;
                }
            }
            p1 = p1 -> next;
        }
        return head;
    }
};