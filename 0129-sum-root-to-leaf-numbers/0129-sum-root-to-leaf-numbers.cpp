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
    int solve(TreeNode *root,int &n,int v){
        if(root==NULL)
        return 0;

        v=v*10+root->val;
         if(root->left == NULL && root->right == NULL) {
            n = n + v;
            return n;
        }
        solve(root->left,n,v);
        
        solve(root->right,n,v);

        return n;

    }
    int sumNumbers(TreeNode* root) {
        int n=0;
        int v=0;
        return solve(root,n,v);
    }
};