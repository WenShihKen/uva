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
    void dfs(TreeNode *node, int temp)
    {
        if (node->left == NULL && node->right == NULL)
        {
            cout << temp << endl;
            ans += (temp + node->val);
        }
        if (node->left)
        {
            dfs(node->left, (temp + node->val) * 2);
        }
        if (node->right)
        {
            dfs(node->right, (temp + node->val) * 2);
        }
    }
    int sumRootToLeaf(TreeNode *root)
    {
        dfs(root, 0);
        return ans;
    }
};