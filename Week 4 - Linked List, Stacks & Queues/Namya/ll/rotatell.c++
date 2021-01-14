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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return head;
        }
        if(head -> next == NULL){
            return head;
        }
        ListNode* t = head;
        ListNode* t1 = head;
        int c = 0;
        while(t1 != NULL){
            t1 = t1 -> next;
            c += 1;
        }
        k = k % c;
        while(k--){
            while(t->next ->next!= NULL){
                t = t -> next;
            }
            ListNode* temp = t -> next;
            t -> next = NULL;
            temp -> next = head;
            head = temp;
            t = head;
        }
        return head;
    }
};