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
    void solve(TreeNode *root,int depth,int &ans){
        if(root==NULL){
           
            return ;
        }
        
        depth++;
        if(root->left==NULL && root->right==NULL){
            
            ans=min(ans,depth);
            
        }
        solve(root->left,depth,ans);
        solve(root->right,depth,ans);


    }
    int minDepth(TreeNode* root) {
        int ans=INT_MAX;
        if(root==NULL)
        ans=0;
        int depth=0;
        solve(root,depth,ans);
        return ans;
    }
};