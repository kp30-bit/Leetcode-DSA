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
//     void solve(TreeNode *root,int &sum,TreeNode *p)
//     {
//         if(root==NULL) return;
        
//         if(root->left==NULL && root->right==NULL)
//         {
//             if(p->left) sum+=p->left->val;
//         }
//         solve(root->left,sum,root);
//         solve(root->right,sum,root);
//     }
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*>q;
        int sum=0;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                TreeNode *t=q.front();
                q.pop();
                if(t->left){
                    TreeNode *left=t->left;
                    if(left->left==NULL && left->right==NULL)
                    {
                        sum+=left->val;
                    }
                }
                if(t->left) q.push(t->left);
                if(t->right)q.push(t->right);
            }
        }
        return sum;
    }
};