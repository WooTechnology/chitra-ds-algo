/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
//Problem at : https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
Node* reverseDLL(Node * head)
{
   Node* curr = head;
   Node* prev = NULL;
   Node* nxt = NULL;
   while(curr != NULL){
       nxt = curr -> next;
       curr -> next = prev;
       curr -> prev = nxt;
       prev = curr;
       curr = nxt;
   }
   head = prev;
   return head;
}