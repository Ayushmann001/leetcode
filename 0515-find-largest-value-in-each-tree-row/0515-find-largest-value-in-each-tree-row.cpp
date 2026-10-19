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
   void solve(TreeNode *root,vector<int> v,vector<int> &ans){
        if(root==NULL)
        return;

        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                if(!q.empty())
                q.push(NULL);

                int maxi = *max_element(v.begin(), v.end());
                ans.push_back(maxi);
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> v;
        vector<int> ans;

        solve(root,v,ans);
        return ans;
    }
};