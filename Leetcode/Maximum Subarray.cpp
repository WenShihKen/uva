/**
 *  @judge Leetcode
 *  @id 53
 *  @name Maximum Subarray
 * 
 *  @tag dp
 */
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        else if (nums.size() == 1)
        {
            return nums[0];
        }
        vector<int> temp;
        int mm = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            mm = max(mm + nums[i], nums[i]);
            nums[i] = mm;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            mm = max(mm, nums[i]);
        }
        return mm;
    }
};