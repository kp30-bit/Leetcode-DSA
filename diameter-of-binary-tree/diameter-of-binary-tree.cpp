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
    int ma;
    
    int func(TreeNode *root)
    {
        if(root==NULL) return 0;
        int x=func(root->left);
        int y=func(root->right);
        ma=max(ma,x+y+1);
        return (max(x,y)+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ma=INT_MIN;
        int x=func(root);
        return ma-1;
    }
};