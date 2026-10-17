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
vector<vector<int>> solve (Node *root,vector<int> v,vector<vector<int>> &ans){
    if(root==NULL)
    return {};
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
            if(curr==NULL){
               if(!q.empty())
                q.push(NULL);

                ans.push_back(v);
                v.clear();
            }
            else{
                v.push_back(curr->val);
                for(int i=0;i<curr->children.size();i++){
                    q.push(curr->children[i]);
                }
            }
        }
    
    return ans;
}

    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        vector<int> v;
        return solve(root,v,ans);
    }
};