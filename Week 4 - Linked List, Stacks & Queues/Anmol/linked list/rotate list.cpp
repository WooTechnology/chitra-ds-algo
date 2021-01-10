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
        if(!head || head->next == NULL || k==0) return head;
    
        //compute length
        ListNode* curr= head;
        int len = 1;
        while(curr->next){
            curr=curr->next;
            len++;
        }
        
        // go till that node
        curr->next = head;
        k = k%len;    // for optimizing where k>= len i.e length of list
        k = len-k;   // i.e from length where we want kth node to point to null

        while(k--) curr = curr->next;
        
        // make node head and break connection 
        head = curr->next;
        curr->next = NULL;
        
        return head;
    }
};