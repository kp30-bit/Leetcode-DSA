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
    
    void solve(TreeNode *root,int val, TreeNode *prev)
    {
        while(root!=nullptr){
            if(root->val>val)
            {
                prev=root;
                root=root->left;
            }
            else if(root->val<val)
            {
                prev=root;
                root=root->right;
            }
        }
        
        if(root==nullptr) {
            TreeNode *newNode=new TreeNode(val);
            if(prev->val>val) prev->left=newNode;
            else if(prev->val<val) prev->right=newNode;
        }
        
        
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr) {
            TreeNode *newNode=new TreeNode(val);
            return newNode;
        }
        TreeNode *prev;
        solve(root,val,prev);
        return root;
        
    }
};