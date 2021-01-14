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
        unordered_map<ListNode*, int> visit;
        while(headA != NULL){
            visit[headA] = 1;
            headA = headA -> next;
        }
        while(headB != NULL){
            if (visit.find(headB) != visit.end()){
                return(headB);
            }
            headB = headB -> next;
        }
        return headB;
    }
};