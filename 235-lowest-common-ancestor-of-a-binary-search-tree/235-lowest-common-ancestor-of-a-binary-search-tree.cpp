/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
        if(root==NULL) return NULL;
        // if(root->val==p->val || root->val==q->val)
        //     return root;
        // TreeNode *l=lowestCommonAncestor(root->left,p,q);
        // TreeNode *r=lowestCommonAncestor(root->right,p,q);
        // if(l&&r) return root;
        // if(l) return l;
        // return r;
        if(n1->val<root->val && n2->val<root->val){
            return lowestCommonAncestor(root->left,n1,n2);
        }
        else if(n1->val>root->val && n2->val>root->val)
        {
            return lowestCommonAncestor(root->right,n1,n2);
        }
        else return root;
    }
};