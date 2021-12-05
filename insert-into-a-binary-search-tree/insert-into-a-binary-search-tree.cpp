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
        TreeNode *cur = root, *node = new TreeNode(val);
        while (cur) {
            if (cur -> val > val) {
                if (cur -> left) {
                    cur = cur -> left;
                } else {
                    cur -> left = node;
                    break;
                }
            } else {
                if (cur -> right) {
                    cur = cur -> right;
                } else {
                    cur -> right = node;
                    break;
                }
            }
        }
        return root ? root : node;
    }
};