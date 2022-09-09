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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int flag=1;
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>temp;
        while(!q.empty())
        {
            int s=q.size();
            while(s--){
                TreeNode *t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(flag%2!=0) {
                ans.push_back(temp);
                flag=2;
                temp.clear();
            }else if(flag%2==0)
            {
                vector<int>temp2;
                for(int i=temp.size()-1;i>=0;i--)
                {
                    temp2.push_back(temp[i]);
                }
                ans.push_back(temp2);
                temp.clear();
                temp2.clear();
                flag=1;
            }
            
        }
        return ans;
    }
};