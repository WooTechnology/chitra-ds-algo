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
    vector<vector<int>> lot(Node* root){
       vector<vector<int>> lv;
        if(root== NULL){
            return lv;
        }
        queue<Node*> qu;
        qu.push(root);
        while(!qu.empty()){
            int s = qu.size();
            vector<int> v;
            for(int i = 0; i < s; i++){
                Node* frnt = qu.front();
                qu.pop();
                v.push_back(frnt -> val);
                for(auto x : frnt -> children){
                    if(x != NULL){
                        qu.push(x);
                    }
                }
            }
            lv.push_back(v);
        }
        return lv;
    }
    vector<vector<int>> levelOrder(Node* root) {
        return(lot(root));
    }
};