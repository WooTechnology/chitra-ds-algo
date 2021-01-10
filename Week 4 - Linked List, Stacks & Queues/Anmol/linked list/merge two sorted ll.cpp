// Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return NULL;
        if(!l1 || !l2) return (!l2? l1 : l2) ;
       
        ListNode *res = new ListNode(-1);   // linked list
        ListNode *head = res;              // pointer
        while(l1!=NULL && l2!=NULL){
            if(l1->val < l2->val){
                head->next = l1; // or result->next = l1 
                l1 = l1->next;
            }
            else{
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;    //to move answer list forward in order to store next element
        }
         head->next = (l1 == NULL ? l2: l1);
        return res->next;
    }
};