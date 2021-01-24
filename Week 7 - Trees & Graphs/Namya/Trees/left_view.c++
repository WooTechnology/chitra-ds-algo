
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// A wrapper over leftViewUtil()
vector<int> leftView(Node *root)
{
   vector<int> lv;
    if(root == NULL){
        return lv;
    }
   queue<Node*> qu;
   qu.push(root);
   while(!qu.empty()){
       int s = qu.size();
       for(int i = 0; i < s; i++){
           Node* fr = qu.front();
           qu.pop();
           if(fr -> left != NULL){
               qu.push(fr -> left);
           }
           if(fr -> right != NULL){
               qu.push(fr -> right);
           }
           if(i == 0){
               lv.push_back(fr -> data);
           }
       }
   }
  return lv;
}
