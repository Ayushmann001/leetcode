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
    vector<vector<int>>solve(TreeNode* root,int target,vector<int> v,vector<vector<int>> &ans,int sum){
      if(root==NULL)
      return {};
      sum=sum+root->val;
      v.push_back(root->val);
      if(sum==target && root->left ==NULL && root->right==NULL){
        ans.push_back(v);
        v.clear();
      }  
      solve(root->left,target,v,ans,sum);
      solve(root->right,target,v,ans,sum);

      return ans;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;

        vector<int> v;
        int sum=0;
        return solve(root,targetSum,v,ans,sum);
    }
};