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
    vector<vector<int>> pathSum(TreeNode *root, int sum)
    {

        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        vector<int> temp;

        dfs(root, temp, sum, ans);

        return ans;
    }

    void dfs(TreeNode *root, vector<int> &temp, int sum, vector<vector<int>> &ans)
    {

        if (root == NULL)
            return;

        temp.push_back(root->val);
        if (sum == root->val && root->left == NULL && root->right == NULL)
            ans.push_back(temp);

        dfs(root->left, temp, sum - root->val, ans);
        dfs(root->right, temp, sum - root->val, ans);

        temp.pop_back();
    }
};