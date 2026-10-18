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
      void solve(TreeNode *root,vector<string> &v, string s){
        if(root==NULL)
        return;
       s+=('a'+root->val);
        if(root->left==NULL && root->right ==NULL){
            reverse(s.begin(),s.end());
            v.push_back(s);
            
        }
       
        solve(root->left,v,s);
        solve(root->right,v,s);
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string> v;
        string s;
        solve(root,v,s);
        sort(v.begin(),v.end());
       
        return v[0];
       
    }
};