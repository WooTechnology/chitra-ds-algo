
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
    ListNode* removeElements(ListNode* head, int val) {
      
        if(head == NULL || (head -> next == NULL && head -> val == val)){
            return NULL;
        }
        if(head -> next == NULL){
            return head;
        }
        /*ListNode* p1 = NULL;
        ListNode* p2 = head;
        while(p2 -> next != NULL){
            if(p2 == head && p2 -> val == val){
                head = head -> next;
                p2 = p2 -> next;
                continue;
                
            }
            else if(p2 == head && p2 -> val != val){
                p1 = p2;
                p2 = p2 -> next;
                continue;
            }
            if(p2 -> val == val && p2 -> next == NULL){
                break;
            }
            if(p2 -> val == val){
                p1 -> next = p2 -> next;
                p2 -> next = p1 -> next;
            }
          
                p1 = p1 -> next;
                p2 = p2 -> next;
            
        }
        cout<<p2 -> val<<p1 -> val;
        if(p2 -> val == val){
            p2 = NULL;
        }*/
        ListNode* p = head;
        while(p != NULL and p -> next != NULL){
            if(p ->next -> val == val){
                
                    p -> next = p -> next -> next;
            }
            else{
                p = p -> next;
            }
        }
        if(head -> val == val){
            head = head -> next;
        }
        return head;
    }
};