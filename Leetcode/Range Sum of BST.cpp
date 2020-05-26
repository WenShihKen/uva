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
class Solution
{
public:
    int ans = 0;
    void dfs(TreeNode *node, int l, int r)
    {
        if (node->val >= l && node->val <= r)
        {
            ans += node->val;
        }
        if (node->left)
        {
            dfs(node->left, l, r);
        }
        if (node->right)
        {
            dfs(node->right, l, r);
        }
    }

    int rangeSumBST(TreeNode *root, int L, int R)
    {
        dfs(root, L, R);
        return ans;
    }
};