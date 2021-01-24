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
    vector<int> l;
    vector<int> pod(Node* root){
        if(root == NULL){
            return l;
        }
          l.push_back(root -> val);
        for(auto x : root -> children){
          //l.push_back(x -> val);
            l = pod(x);
        }
        return l;
    }
    vector<int> preorder(Node* root) {
        return(pod(root));
    }
};