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
    void mapping(vector<int> inorder,int n,map<int,int> &nodetoindex){
      for(int i=0;i<n;i++){
          nodetoindex[inorder[i]]=i;
      }
  }
    TreeNode *solve(vector<int> in,vector<int> post,int &index,int inorderstart,int inorderend,int n,map<int,int> &nodetoindex){
      if(index<0 || inorderstart> inorderend){
          return NULL;
      }
      int element=post[index--];
      TreeNode *root=new TreeNode(element);
      int position=nodetoindex[element];
      
      root->right=solve(in,post,index,position+1,inorderend,n,nodetoindex);
      root->left=solve(in,post,index,inorderstart,position-1,n,nodetoindex);
      
      return root;
  }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int n=inorder.size();
        int inorderstart=0;
        int inorderend=n-1;
        int postindex=n-1;
        
        map<int,int> nodetoindex;
        
        mapping(inorder,n,nodetoindex);
        
        TreeNode *ans=solve(inorder,postorder,postindex,inorderstart,inorderend,n,nodetoindex);
        
        return ans;
    }
};