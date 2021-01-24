/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int dp(Node* root){
        if(root == NULL){
            return 0;
        }
        int m = 0;
        for(auto x : root -> children){
            m = max(dp(x), m);
        }
        return m + 1;
    }
    int maxDepth(Node* root) {
        return(dp(root));
    }
};