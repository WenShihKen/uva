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

    void find(TreeNode *node, string s)
    {
        if (node->left == NULL && node->right == NULL)
        {
            if (s == "left")
            {
                ans += node->val;
            }
        }
        if (node->left)
        {
            find(node->left, "left");
        }
        if (node->right)
        {
            find(node->right, "right");
        }
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == NULL)
            return ans;
        find(root, "root");
        return ans;
    }
};