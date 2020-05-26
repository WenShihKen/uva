/**
 *  @judge LeetCode
 *  @id 
 *  @name Deepest Leaves Sum
 *  @contest
 * 
 *  @tag tree
 */
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
    int deep = 0;
    void dfs1(TreeNode *node, int d)
    {
        deep = max(deep, d);
        if (node->left)
        {
            dfs1(node->left, d + 1);
        }
        if (node->right)
        {
            dfs1(node->right, d + 1);
        }
    }
    void dfs2(TreeNode *node, int d, int &ans)
    {
        if (d == deep)
        {
            ans += node->val;
        }
        if (node->left)
        {
            dfs2(node->left, d + 1, ans);
        }
        if (node->right)
        {
            dfs2(node->right, d + 1, ans);
        }
    }
    int deepestLeavesSum(TreeNode *root)
    {
        int ans = 0;
        dfs1(root, 0);
        dfs2(root, 0, ans);
        return ans;
    }
};