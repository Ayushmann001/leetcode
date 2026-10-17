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
    void solve(Node *root,vector<int> &v,int level){
        if(root==NULL)
        return;
        if(level==v.size())
        v.push_back(root->val);

        for (int i = 0; i < root->children.size(); i++) {
            Node* child = root->children[i];
            solve(child, v, level + 1);
        }
       
    }
    int maxDepth(Node* root) {
        vector<int> v;
        int level=0;
        solve(root,v,level);
        return v.size();
    }
};