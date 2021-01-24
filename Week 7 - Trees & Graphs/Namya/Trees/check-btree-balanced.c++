/* A binary tree node structure

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

// This function should return tree if passed  tree 
// is balanced, else false
int h(Node* root){
    if(root == NULL){
        return 0;
    }
    return(max(h(root -> left), h(root -> right))+ 1);
}
bool isBalanced(Node *root)
{
    if (root == NULL){
        return 1;
    }
    int l = h(root -> left);
    int r = h(root -> right);
    return(isBalanced(root -> left) && isBalanced(root -> right) && abs(l - r) <= 1);
}
