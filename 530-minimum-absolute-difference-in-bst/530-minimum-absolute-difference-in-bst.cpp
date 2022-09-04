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
    
    // void solve(TreeNode *root,int &minn)
    // {
    //     if(root==NULL) return;
    //     if(root->left)
    //     {
    //         minn=min(minn,root->val-root->left->val);
    //     }
    //     if(root->right)
    //     {
    //         minn=min(minn,root->right->val-root->val);
    //     }
    //     solve(root->left,minn);
    //     solve(root->right,minn);
    // }
    
    void solve(TreeNode *root,vector<int>&inorder){
        if(root==NULL) return;
        solve(root->left,inorder);
        inorder.push_back(root->val);
        solve(root->right,inorder);
    }
    int getMinimumDifference(TreeNode* root) {
        // int minn=INT_MAX;
        // solve(root,minn);
        // return minn;
        vector<int>inorder;
        solve(root,inorder);
        int ans=INT_MAX;
        for(int i=0;i<inorder.size()-1;i++)
        {
            ans=min(ans,inorder[i+1]-inorder[i]);
        }
        return ans;
    }
};

// ....       236
//      104         701
//   null  227  null    911