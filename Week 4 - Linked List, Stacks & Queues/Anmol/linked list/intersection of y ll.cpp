// Write a program to find the node at which the intersection of two singly linked lists begins.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ios_base::sync_with_stdio(NULL); 
        cin.tie(0); cout.tie(0);
        
        ListNode *a_pointer = headA,*b_pointer = headB;
        
        while(a_pointer != b_pointer){
            
             a_pointer = (a_pointer == NULL)? headB :a_pointer->next;
             b_pointer = (b_pointer == NULL)? headA :b_pointer->next;
            // if(a_pointer == NULL) 
            //     a_pointer = headB;
            // else
            //     a_pointer = a_pointer->next;
            // if
            //     (b_pointer == NULL) b_pointer = headA;
            // else
            //     b_pointer = b_pointer->next;
        }
        return a_pointer;
    }
};