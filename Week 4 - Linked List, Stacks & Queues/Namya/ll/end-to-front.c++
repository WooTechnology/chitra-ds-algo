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
    if(head == NULL || (head -> next) == NULL){
        return head;
    }
    ListNode* p1 = head;
        ListNode* temp;
    while(p1 -> next -> next != NULL){
        p1 = p1 -> next;
        
    }
        temp = p1 -> next;
        cout<<temp -> val;
        p1 -> next = NULL;
        temp -> next = head;
        return temp;
    }
};