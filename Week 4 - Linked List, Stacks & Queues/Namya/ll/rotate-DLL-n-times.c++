//Problem at : https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
/*
struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

struct node*update(struct node*start,int p)
{
    while(p--){
        node* first = start;
        node* second = start -> next;
        node* move = start;
        while(move -> next != NULL){
            move = move -> next;
        }
        move -> next = first;
        first -> prev = move;
        first -> next = NULL;
        start = second;
    }
    return start;
}