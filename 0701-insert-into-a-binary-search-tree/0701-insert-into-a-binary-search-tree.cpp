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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root==NULL)
        return new TreeNode(val);
        TreeNode *curr=root;
        while(true){
            if(curr->val>val){
                if(curr->left!=NULL)
                curr=curr->left;
                 else{
                    curr->left=new TreeNode (val);
                    break;
                }
            }
            else{
                if(curr->right!=NULL)
                curr=curr->right;
                else{
                    curr->right=new TreeNode (val);
                    break;
                }
               
            }
        }
        return root;
    }
};



// public:
//     void inorder(TreeNode *root,vector<int> &v){
//         if(root==NULL)
//         return;
//         inorder(root->left,v);
//         v.push_back(root->val);
//         inorder(root->right,v);
//     }
//     TreeNode *inordertobst(vector<int> &v,int s,int e){


//         if(s>e)
//         return NULL;

//         int mid=(s+e)/2;
//         TreeNode *root=new TreeNode(v[mid]);
//         root->left=inordertobst(v,s,mid-1);
//         root->right=inordertobst(v,mid+1,e);

//         return root;
//     }
    
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         vector<int> v;
//         inorder(root,v);
        
//         int index = 0;
//         while(index < v.size() && v[index] < val) {
//             index++;
//         }
//         v.insert(v.begin()+index,val);
//         int s=0;
//         int e=v.size()-1;
//         return inordertobst(v,s,e);
        
//     }
// };