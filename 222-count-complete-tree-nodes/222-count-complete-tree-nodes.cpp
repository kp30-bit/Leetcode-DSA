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
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int l=findleftheight(root);
        int r=findrightheight(root);
        if(l==r) 
        {
            return pow(2,r)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
        
    }
    
    int findleftheight(TreeNode *root){
        int height=0;
        while(root){
            height++;
            root=root->left;
        }
        return height;
    }
    
    int findrightheight(TreeNode *root)
    {
        int height=0;
        while(root){
            height++;
            root=root->right;
        }
        return height;
    }
};