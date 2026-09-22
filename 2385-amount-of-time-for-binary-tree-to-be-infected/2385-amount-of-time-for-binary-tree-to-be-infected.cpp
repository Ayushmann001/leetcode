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
    TreeNode* createmapping(TreeNode* root,int start,map<TreeNode*,TreeNode*> &nodetoparent){
        queue<TreeNode*>q;
        q.push(root);
        nodetoparent[root]=NULL;
        TreeNode* res=NULL;

        while(!q.empty()){
            TreeNode* front=q.front();
            q.pop();

            if(front->val==start){
                res=front;
            }

            if(front->left){
                nodetoparent[front->left]=front;
                q.push(front->left);
            }
            if(front->right){
                nodetoparent[front->right]=front;
                q.push(front->right);
            }
        }
        return res;
    }
    int burntree(TreeNode* root,map<TreeNode*,TreeNode*> &nodetoparent){
        map<TreeNode*,bool>visited;
        queue<TreeNode*>q;

        visited[root]=1;
        q.push(root);

        int ans=0;
        while(!q.empty()){
                 bool flag=0;
           int n=q.size();
           for(int i=0;i<n;i++){
                TreeNode* front=q.front();
               q.pop();
               
               if(front->left && !visited[front->left]){
                   flag=1;
                   q.push(front->left);
                   visited[front->left]=1;
               }
               if(front->right && !visited[front->right]){
                   flag=1;
                   q.push(front->right);
                   visited[front->right]=1;
                   
               }
               if(nodetoparent[front] && !visited[nodetoparent[front]]){
                   flag=1;
                    q.push(nodetoparent[front]);
                   visited[nodetoparent[front]]=1;
               }
           }
           if(flag==1)
           ans++;
          
      }
      return ans;
        }
    
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*> nodetoparent;
        TreeNode* targetnode=createmapping( root,  start, nodetoparent);

        int ans=burntree(targetnode,nodetoparent);
        return ans;

        
    }
};