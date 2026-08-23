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
    int height(TreeNode* root){
        if(root==NULL)
        return 0;

        int left=height(root->left);
        int right=height(root->right);

        return max(left,right)+1;
    }
public:
    // bool isBalanced(TreeNode* root) {
    //     if(root==NULL)
    //     return true;

    //     if(abs(height(root->left)-height(root->right))>1)    //codestorymik
    //     return false;

    //     return isBalanced(root->left) && isBalanced(root->right);
        
    // }

    //   bool isBalanced(TreeNode* root) {
    //     if(root==NULL)
    //     return true;

    //     bool left=isBalanced(root->left);                   //lovebabbar app1 o(n2)
    //     bool right=isBalanced(root->right);

    //     bool diff=abs(height(root->left)-height(root->right))<=1;

    //     if(left && right && diff)
    //     return true;
    //     else
    //     return false;

    pair<bool,int>isbalancedfast(TreeNode* root){ //same but in O(n) in it no need of height func.
        if(root==NULL){
            pair<bool,int> p =make_pair(true,0);
            return p;
        }
        pair<bool,int>left=isbalancedfast(root->left);
        pair<bool,int>right=isbalancedfast(root->right);

        bool leftans=left.first;
        bool rightans=right.first;

        bool diff=abs(left.second-right.second)<=1;

        pair<bool,int>ans;
        ans.second=max(left.second,right.second)+1;

        if(leftans && rightans && diff)
        ans.first=true;
        else
        ans.first=false;

        return ans;
    }

     bool isBalanced(TreeNode* root) {
       return isbalancedfast(root).first;
        
    }
        
    
};