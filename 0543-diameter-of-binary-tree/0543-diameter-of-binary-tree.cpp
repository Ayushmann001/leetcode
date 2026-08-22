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

// class Solution {
//     int height(TreeNode* root){
//         if (root==NULL)
//         return 0;

//         int left=height(root->left);
//         int right=height(root->right);

//         int ans=max(left,right)+1;
//         return ans;
//     }
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL)
//         return 0;

//         int op1=diameterOfBinaryTree(root->left);
//         int op2=diameterOfBinaryTree(root->right);
//         int op3=height(root->left)+height(root->right);

//         int ans=max(op1,max(op2,op3));
//         return ans;
//     }
// };

class Solution {
    int height(TreeNode* node , int &diameter){
        if(!node)
        return 0;
        int lh=height(node->left,diameter);
        int rh=height(node->right,diameter);
        diameter=max(diameter,lh+rh);
        return 1+max(lh,rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
};