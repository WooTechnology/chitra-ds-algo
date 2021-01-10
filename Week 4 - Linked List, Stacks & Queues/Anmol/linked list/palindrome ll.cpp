// Given a singly linked list, determine if it is a palindrome.
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
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
        if(head->next == NULL) return true;
        if(head->next->next == NULL) return (head->val == head->next->val);
        
        ListNode *slow,*fast;
        slow = fast = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        // reversing half ll
        ListNode *prev = NULL,*curr = head, *next;
        while(curr != slow){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
       if(fast) slow = slow->next;//for odd ll
        while(prev != NULL and slow != NULL){
            if(prev->val != slow->val) return false;
            prev = prev->next;
            slow = slow->next;
        }
        return true;
    }
};


//another O(n) time and o(n) space approach
class Solution {
public:
    bool isPalindrome(ListNode* head) {    
        stack<ListNode*> nodestack;
        ListNode* p = head;
        while(p) {
            nodestack.push(p);
            p=p->next;
        }
        while(head) {
            if(head->val != nodestack.top()->val) {
                return false;
            }
            nodestack.pop();
            head=head->next;
        }
        return true;
    }
};