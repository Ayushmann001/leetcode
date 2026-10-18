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
       s+=to_string(root->val);
        if(root->left==NULL && root->right ==NULL){
            v.push_back(s);
            
        }
        s+="->";
        solve(root->left,v,s);
        solve(root->right,v,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> v;
        string s;
         solve(root,v,s);
         return v;
    }
};