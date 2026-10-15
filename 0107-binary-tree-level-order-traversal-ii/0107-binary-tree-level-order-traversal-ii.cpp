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
    vector<vector<int>> solve(TreeNode *root,vector<int> v,vector<vector<int>> &ans){
        if(root==NULL)
        return {};
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                ans.push_back(v);
                v.clear();
                if(!q.empty())
                q.push(NULL);
            }
            else{
                if(curr->left){
                    q.push(curr->left);
                   
                }
                if(curr->right){
                    q.push(curr->right);
                   
                }
                v.push_back(curr->val);

            }

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> v;
        return solve(root,v,ans);
    }
};