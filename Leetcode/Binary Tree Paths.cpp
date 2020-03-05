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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> ans;
        if (!root)
            return ans;
        string temp;
        dfs(root, temp, ans);
        return ans;
    }

    void dfs(TreeNode *root, string temp, vector<string> &ans)
    {
        temp += to_string(root->val);
        if (!root->left && !root->right)
        {
            ans.push_back(temp);
            return;
        }
        if (root->left)
            dfs(root->left, temp + "->", ans);
        if (root->right)
            dfs(root->right, temp + "->", ans);
    }
};