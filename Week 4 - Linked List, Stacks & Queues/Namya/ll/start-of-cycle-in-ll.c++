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
    
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        //they will always meet as one will be faster than the other
        int f = 0;
        while(fast != NULL && fast -> next != NULL && slow != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                f = 1;
                break;
            }
        }
        cout<<"f is "<<f<<endl;
        //now u need to get the point of intersection, of these things
        if(f != 0){
            slow = head;
            while(slow != fast){
                slow = slow -> next;
                fast = fast -> next;
            }
        return slow;
        }
        return NULL;
    }
};