/**
 *  @judge Leetcode
 *  @id 198
 *  @name House Robber
 * 
 *  @tag dp
 */
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int ans = 0;
        if (nums.size() == 0)
            return 0;
        else if (nums.size() == 1)
            return nums[0];
        vector<int> dp;
        dp.resize(nums.size());
        dp[0] = nums[0];
        dp[1] = max(nums[1], nums[0]);
        ans = max(dp[0], dp[1]);
        for (int i = 2; i < nums.size(); i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
            ans = max(dp[i], ans);
        }
        return ans;
    }
};