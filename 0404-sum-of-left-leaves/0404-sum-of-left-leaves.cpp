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
    void inorder(TreeNode* root,int &sum,bool isleft){
        if(root==NULL)
        return;
        inorder(root->left,sum,true);
        if(root->left==NULL && root->right==NULL && isleft)
        sum=sum+root->val;
        inorder(root->right,sum,false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        bool isleft=false;
        inorder(root,sum,isleft);
        return sum;
    }
};