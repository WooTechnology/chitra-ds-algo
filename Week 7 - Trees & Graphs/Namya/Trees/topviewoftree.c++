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
    map<int, vector<int>> el;
    map<int, vector<int>> io(TreeNode* root, int index){
         if(root == NULL){
            return el;
        }
        el = io(root -> left, index - 1);
        el[index].push_back(root -> val);
        el = io(root -> right, index + 1);
    
    return el;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
 
       vector<vector<int>> k;
       map<int, vector<int>> mp = io(root, 0);
    
        for(auto x : mp){
            cout<<endl;
            sort(x.second.begin(), x.second.end());
            k.push_back(x.second);
            cout<<x.first<<" values are "<<endl;
            for(auto y : x.second){
                cout<<y<<" ";
            }
        }
        return k;
    }
};
