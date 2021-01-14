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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        /*ListNode* p1 = NULL;
        ListNode* p2 = head;
        while(n--){
            p2 = p2 -> next;
        }
        if(p2 == NULL){
            p1 = head -> next -> next;
            return head;
        }
        while(p2 != NULL){
            p2 = p2 -> next;
            if(p1 == NULL){
                p1 = head;
            }
            else{
                cout<<"here"<<p1->val;
                p1 = p1 -> next;
            }
        }
        
        if(p1 == NULL){
            return head;
        }
        p1 -> next = p1 -> next -> next;
        return head;*/
        if(head == NULL){
            return head;
        }
        if(head -> next == NULL && n == 1){
            return NULL;
        }
        
        ListNode* p1 = head;
        ListNode* p2 = head;
        ListNode* p3 = NULL;
        int c = 0;
        while(p1 != NULL){
            c += 1;
            p1 = p1 -> next;
        }
        if(c == n){
            head = head -> next;
            return head;
        }
        c = c - n;
        while(c--){
            p3 = p2;
            p2 = p2 -> next;
        }
        p3 -> next = p2 -> next;
        delete(p2);
        return head;
    }
};