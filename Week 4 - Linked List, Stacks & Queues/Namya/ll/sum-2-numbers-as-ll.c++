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

//Doubt not understanding why it is breaking

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        ListNode* j = head;
        if(l1 == NULL){
            return l2;
        }
        else if(l2 == NULL){
            return l1;
        }
        else if(l1 == NULL && l2 == NULL){
            return l1;
        }
        int c = 0;
        ListNode* t = l1;
        while(l1 != NULL && l2 != NULL){
            int v1, v2;
            if (l1 == NULL){
                v1 = 0;
            }
            else{
                v1 = l1 -> val;
            }
            if (l2  == NULL){
                v2 = 0;
            }
            else{
                v2 = l2 -> val;
            }
            int s = (v1 + v2) + c;
            int soi = s % 10 ;
            cout<<soi<<endl;
            if (head == NULL){
                head = new ListNode(soi);
                tail = head;
            }
            else{
                tail -> next = new ListNode(soi);
                tail = tail -> next;
                //head = head -> next;
            }
          
            c = s / 10;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        if(c == 0){
            return head;
        }
        else{
            ListNode* g = new ListNode(c);
            tail -> next = g;
            return head;
        }
     
    }
};