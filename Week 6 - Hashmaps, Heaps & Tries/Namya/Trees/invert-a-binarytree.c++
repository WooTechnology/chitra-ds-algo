/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invTree(TreeNode* root){
        //invert a binary tree, call invert on left and right children and then reverse the 
        //connections
        //just simple recursion
        
        if (root == NULL) return root;
        invTree(root -> left);
        invTree(root -> right);
        TreeNode* temp = root -> left;
        root -> left = root -> right;
        root -> right = temp;
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        return(invTree(root));
    }
};