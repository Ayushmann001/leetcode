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
    bool mirror(TreeNode*  p,TreeNode* q){
        if (p==NULL && q==NULL)
        return true;
        if (p==NULL && q!=NULL)
        return false;
        if (p!=NULL && q==NULL)
        return false;
       
        
       
            bool left=mirror(p->left,q->right);
            bool right=mirror(p->right,q->left);
            bool value=p->val==q->val;
        if(left&&right&&value)
        return true;
        else
        return false;
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;
        return  mirror(root->left,root->right);
        
    }
};