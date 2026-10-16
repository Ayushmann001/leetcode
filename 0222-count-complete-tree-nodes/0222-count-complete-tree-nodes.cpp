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
    int getnodesleft(TreeNode* root){
       
      int lh=0;
      TreeNode *temp=root;
      while(temp){
        lh++;
        temp=temp->left;
        }
        return lh;

    }
    int getnodesright(TreeNode* root){
       
      int rh=0;
      TreeNode *temp=root;
      while(temp){
        rh++;
        temp=temp->right;
        }
        return rh;

    }
    int solve(TreeNode *root){
        if(root==NULL)
        return 0;
        int lh=0;
        int rh=0;
        lh=getnodesleft(root);
        rh=getnodesright(root);

        if(lh==rh)
        return pow(2,lh)-1;

        return solve(root->left)+1+solve(root->right);

    }
    int countNodes(TreeNode* root) {
        return solve(root);
    }
};