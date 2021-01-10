// Reverse a linked list from position m to n. Do it in one-pass.
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head) return NULL;
        ListNode* curr = head, *prev = NULL;
        
        while(m>1){
            prev = curr;
            curr = curr->next;
            m--; n--;
        }
        
        ListNode *connect = prev, *tail = curr; // The two pointers that will fix the final connections.
        
        while(n>0){
            ListNode *nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            n--;
        }
    
        if(connect != NULL)  
            connect->next = prev;
        else 
            head = prev;
        
        tail->next = curr;
        return head;
    }
};