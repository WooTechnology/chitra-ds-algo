// reverse a singly linked list

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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *curr=head, *previous=NULL, *next;
        while(curr!=NULL){
            next= curr->next;
            curr->next = previous; 
            previous = curr;
            curr = next;
        }
        return previous;
    }
};

            // next=current->next;
            // current->next=previous;
            // previous=current;
            // current=next;