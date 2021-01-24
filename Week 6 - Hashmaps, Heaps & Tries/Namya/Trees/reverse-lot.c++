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
#include<queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> lot;
        if(root == NULL){
            return lot;
        }
        queue<TreeNode*> bfs;
        bfs.push(root);
        int d = 0;
        while(!bfs.empty()){
            vector<int> level;
            int s = bfs.size();
            for(int i = 0; i < s; i++){
                TreeNode* t = bfs.front();
                bfs.pop();
                if(t -> left != NULL){
                    bfs.push(t -> left);
                }
                if(t -> right != NULL){
                    bfs.push(t -> right);
                }
                level.push_back(t -> val);
            }
            lot.insert(lot.begin(), level);
        }
        return(lot);
    }
    
};