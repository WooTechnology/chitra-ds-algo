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
//Problem at : https://leetcode.com/problems/palindrome-linked-list

class Solution {
public:
    //goto half the length of the linked list and then push elements in the stack
    //successively pop elements from the stack
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        ListNode* t = head;
        int c = 0;
        while(t != NULL){
            c += 1;
            t = t -> next;
        }
        if(c == 1){
            return true;
        }
        stack <int> s;
        int l = 0;
        while(head != NULL){
            if(c & 1 && l == c / 2){
                head = head -> next;
            }
            if(l < (c /2)){
                s.push(head -> val);
                head = head -> next;
            
            }
            else{
                if(s.top() != head -> val){
                    return false;
                }
                else{
                    s.pop();
                    head = head -> next;
                }
            }
            l += 1;
        }
        return true;
    }
};


//second approach, fails a few cases
bool isPalindrome(Node *head)
{
    Node* prev = NULL;
    Node* nxt = NULL;
    Node* curr = head;
    Node* temp = head;
    while(curr != NULL){
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            //prev = prev -> next;
            curr = nxt;
        }
        head = prev;
    Node* k = head;
    /*while(k != NULL){
        cout<<k -> data<<" ";
        k = k -> next;
    }
    cout<<endl;*/
    while(temp != NULL){
        if(temp -> data != head -> data){
            return false;
        }
        temp = temp -> next;
        head = head -> next;
        
    }
    /**/
    return true;
}

