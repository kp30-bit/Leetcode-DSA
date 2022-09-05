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
    int index=0;
    unordered_map<int,int>mp;
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start, int end) {
        if (start > end) return nullptr;
        TreeNode* node = new TreeNode(preorder[index++]);
        int mid = mp[node->val];
        node->left = solve(preorder, inorder, start, mid - 1);
        node->right = solve(preorder, inorder, mid + 1, end);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        mp.clear();
        index=0;
        int n = preorder.size();
        for (int i = 0; i < n; i++) {
            mp[inorder[i]] = i;
        }
        return solve(preorder, inorder, 0, n - 1);
    }
};