class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
            return 0;
        if (nums[nums.size() - 1] < target)
            return nums.size();

        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                ans = i;
                break;
            }
            else if (target < nums[i])
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};