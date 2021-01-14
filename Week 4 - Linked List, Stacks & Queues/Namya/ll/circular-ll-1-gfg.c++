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

//Problem at : https://practice.geeksforgeeks.org/problems/circular-linked-list/1
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        /*ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;
        while(curr != NULL){
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            //prev = prev -> next;
            curr = nxt;
        }
        head = prev;
        return head;
    }*/
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