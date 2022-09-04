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
    
    void solve(TreeNode* p,TreeNode* q,int &f)
    {
        if(p==NULL & q==NULL) {
            
            return ;
        }
        if((!p && q) || (p && !q)){
            f=0;
          return;
        } 
        if(p->val!=q->val) f=0;
        solve(p->left,q->left,f);
        solve(p->right,q->right,f);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
         int f=1;
        
       
        solve(p,q,f);
        return f;
    }
};