/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int ans = INT_MAX;
        dfs(root, 1, ans);
        return ans;
    }
    void dfs(TreeNode *node, int count, int &ans)
    {
        if (!node->left && !node->right)
        {
            ans = min(ans, count);
            return;
        }
        count++;
        if (node->left)
            dfs(node->left, count, ans);
        if (node->right)
            dfs(node->right, count, ans);
        count--;
    }
};