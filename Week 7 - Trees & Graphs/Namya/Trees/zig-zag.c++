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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zlot;
        if(root == NULL){
            return zlot;
        }
        queue<TreeNode*> level;
        level.push(root);
        int d = -1;
        while(!level.empty()){
            vector<int> l;
            int s = level.size();
            d += 1;
            for(int i = 0; i < s; i++){
                TreeNode* temp = level.front();
                level.pop();
                if(temp != NULL && temp -> left != NULL){
                    level.push(temp -> left);
                }
                if(temp != NULL && temp -> right != NULL){
                    level.push(temp -> right);
                }
                l.push_back(temp -> val);
            }
            if(d & 1){
                   reverse(begin(l), end(l));
            }
            zlot.push_back(l);
        }
        return zlot;
    }
};