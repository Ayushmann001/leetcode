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
    TreeNode* inorder(TreeNode *root){
        if(root==NULL)
        return NULL;
        inorder(root->left);
        cout<<root->val;
        inorder(root->right);

        return root;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
        return NULL;
        if(root->val==val){
            return inorder(root);
        }
        if(root->val < val){
            return searchBST(root->right,val);
        }
        if(root->val > val){
            return searchBST(root->left,val);
        }
        return NULL;
    }
};