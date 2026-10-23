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
    void solve(TreeNode *root,vector<double> v,vector<double> &ans){
        if(root==NULL)
        return;

        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode *curr=q.front();
            q.pop();
            if(curr==NULL){
                if(!q.empty())
                q.push(NULL);

                double anss=0;
                for(int i=0;i<v.size();i++){
                    anss=anss+v[i];
                }
                anss=anss/v.size();
                ans.push_back(anss);

                v.clear();
                
            }
            else{
                v.push_back(curr->val);

                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
            }
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        vector<double> ans;
        solve(root,v,ans);
        return ans;
    }
};